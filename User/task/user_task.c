/*
  保存任务属性，生成任务时使用。
*/

/* Includes ----------------------------------------------------------------- */
#include "task\user_task.h"

/* 机器人运行时的数据 */
Task_Runtime_t task_runtime;

/* 各个任务的参数 */
const osThreadAttr_t attr_init = {
    .name = "init",
    .priority = (osPriority_t)osPriorityLow,
    .stack_size = 256 * 4,
};

const osThreadAttr_t attr_atti_esti = {
    .name = "atti_esti",
    .priority = (osPriority_t)osPriorityRealtime,
    .stack_size = 256 * 4,
};

const osThreadAttr_t attr_cli = {
    .name = "cli",
    .priority = (osPriority_t)osPriorityLow,
    .stack_size = 256 * 4,
};

const osThreadAttr_t attr_command = {
    .name = "command",
    .priority = (osPriority_t)osPriorityHigh,
    .stack_size = 128 * 4,
};

const osThreadAttr_t attr_ctrl_chassis = {
    .name = "ctrl_chassis",
    .priority = (osPriority_t)osPriorityAboveNormal,
    .stack_size = 256 * 4,
};

const osThreadAttr_t attr_ctrl_gimbal = {
    .name = "ctrl_gimbal",
    .priority = (osPriority_t)osPriorityAboveNormal,
    .stack_size = 256 * 4,
};

const osThreadAttr_t attr_ctrl_shoot = {
    .name = "ctrl_shoot",
    .priority = (osPriority_t)osPriorityAboveNormal,
    .stack_size = 256 * 4,
};

const osThreadAttr_t attr_info = {
    .name = "info",
    .priority = (osPriority_t)osPriorityBelowNormal,
    .stack_size = 128 * 4,
};

const osThreadAttr_t attr_monitor = {
    .name = "monitor",
    .priority = (osPriority_t)osPriorityNormal,
    .stack_size = 128 * 4,
};

const osThreadAttr_t attr_motor = {
    .name = "motor",
    .priority = (osPriority_t)osPriorityRealtime,
    .stack_size = 128 * 4,
};

const osThreadAttr_t attr_referee = {
    .name = "referee",
    .priority = (osPriority_t)osPriorityNormal,
    .stack_size = 128 * 4,
};
