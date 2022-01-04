/*
 * @Author: your name
 * @Date: 2021-12-28 11:22:15
 * @LastEditTime: 2022-01-04 10:55:45
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /fusion/src/graph_tool/src/main.cpp
 */
#include "../include/graph_tool/tool_core.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "graph_tool");
    ros::NodeHandle nh_private("~");

    //std::string map_ = "/home/wangpeng/fusion/src/graph_tool/maps/";
    GraphTool tool(nh_private);
    tool.write_xml();
    return 0;
}