// Copyright 2015-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>

#import <ABI43_0_0ExpoModulesCore/ABI43_0_0EXInternalModule.h>
#import <ABI43_0_0ExpoModulesCore/ABI43_0_0EXConstantsInterface.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const ABI43_0_0EXConstantsExecutionEnvironmentBare;
FOUNDATION_EXPORT NSString * const ABI43_0_0EXConstantsExecutionEnvironmentStandalone;
FOUNDATION_EXPORT NSString * const ABI43_0_0EXConstantsExecutionEnvironmentStoreClient;

@interface ABI43_0_0EXConstantsService : NSObject <ABI43_0_0EXInternalModule, ABI43_0_0EXConstantsInterface>

- (NSString *)buildVersion;
- (CGFloat)statusBarHeight;
- (NSString *)iosVersion;
- (NSString *)userInterfaceIdiom;
- (BOOL)isDevice;
- (NSArray<NSString *> *)systemFontNames;

+ (NSString *)devicePlatform;
+ (nullable NSString *)deviceModel;
+ (NSNumber *)deviceYear;
+ (NSString *)deviceName;

@end

NS_ASSUME_NONNULL_END
