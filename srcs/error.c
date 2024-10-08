/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kytan <kytan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:24:01 by kytan             #+#    #+#             */
/*   Updated: 2024/06/25 10:21:30 by kytan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"

/** @brief Exits the program with a custom errror message based
 * on the exit_status
 *
 * This function terminates the program with prints error messages
 * based on type of error from the `exit_status` parameter. It colors
 * the teminal output to yellow for displaying messages. If the program
 * runs successfully, it exits the program with a success status code.
 * Otherwise, it will print out the exit with the appropriate error status.
 *
 * It exits the program with the same exit_status passed in as
 * parameter.
 *
 * @param exit_status the exit status indicating the type of error
 */
void	exit_err(int exit_status)
{
	ft_printf("%s", COLOR_ERR_MSG);
	if (exit_status == INVALID_ARGS_ERROR)
		ft_printf("INVALID_ARGS_ERROR: { Usage: ./fdf <map>.fdf }\n");
	else if (exit_status == FILE_OPEN_ERROR)
		ft_printf("FILE_OPEN_ERROR: Failed to open file\n");
	else if (exit_status == MEM_ALLOC_ERROR)
		ft_printf("MEM_ALLOC_ERROR: Failed in allocating memory\n");
	else if (exit_status == MAP_EMPTY_ERROR)
		ft_printf("MAP_EMPTY_ERROR: Map is empty...just like your soul\n");
	else if (exit_status == LIBFT_ERROR)
		ft_printf("LIBFT_ERROR: Your libft function failed\n");
	else if (exit_status == MLX_ERROR)
		ft_printf("MLX_ERROR: Your minilibx function failed\n");
	else if (exit_status == SUCCESS)
		ft_printf("SUCCESS: The program ran successfully\n");
	else if (exit_status == ASIAN_FAILURE_ERROR)
		ft_printf("ASIAN_FAILURE_ERROR: You're the problem\n");
	ft_printf("%s", RESET_ERR_MSG);
	exit(exit_status);
}
