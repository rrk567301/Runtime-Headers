@class NSString;

@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceFreeSpaceEnum:(id)a0;

- (id)lowPowerModeEnabled;
- (id)deviceModel;
- (id)osVersion;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)process;
- (void)registerSystemProperties:(id)a0;
- (id)appLaunchSource;
- (id)deviceFreeSpaceDescription;
- (id)percentageOfFreeSpaceOnDevice;

@end
