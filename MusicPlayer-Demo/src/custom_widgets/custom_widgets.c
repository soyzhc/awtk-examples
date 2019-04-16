﻿/**
 * File:   custom_widgets.c
 * Author: AWTK Develop Team
 * Brief:  custom widgets
 *
 * Copyright (c) 2018 - 2018  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-12-11 Xu ChaoZe <xuchaoze@zlg.cn> created
 *
 */

#include "custom_widgets.h"
#include "chart/chart_view.h"
#include "chart/axis.h"
#include "chart/line_series.h"
#include "chart/bar_series.h"
#include "photo_frame/frame_view.h"

ret_t custom_widgets_init() {
  widget_factory_register(widget_factory(), WIDGET_TYPE_CHART_VIEW, chart_view_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_AXIS, axis_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_LINE_SERIES, line_series_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_BAR_SERIES, bar_series_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_FRAME_VIEW, frame_view_create);

  return RET_OK;
}
