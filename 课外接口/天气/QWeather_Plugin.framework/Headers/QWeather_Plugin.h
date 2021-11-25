//
//  QWeather_Plugin.h
//  QWeather_Plugin
//
//  Created by hefengtianqi on 2020/10/21.
//

#import <Foundation/Foundation.h>

//! Project version number for QWeather_Plugin.
FOUNDATION_EXPORT double QWeather_PluginVersionNumber;

//! Project version string for QWeather_Plugin.
FOUNDATION_EXPORT const unsigned char QWeather_PluginVersionString[];

/* 当前版本 2020-10-22 2.0 */

/*
 1.请将frameWork加入项目中，导入头文件#import <QWeather_Plugin/QWeather_Plugin.h>
 */

/*
 2.本项目依赖于 'SDWebImage' 'Masonry'请确保您的项目中已经安装这两个类库
 */

/*
 3.sdk需要开启定位权限，请在工程plist.info文件中添加NSLocationAlwaysAndWhenInUseUsageDescription和NSLocationWhenInUseUsageDescription
 */

/*
 4.请在info.plist文件添加NSAppTransportSecurity ->Allow Arbitrary Loads元素，同时设为 YES
 */
#import <QWeather_Plugin/QWeatherPluginView.h>

#import "QWeather_Plugin/QWeatherConfigModel.h"
