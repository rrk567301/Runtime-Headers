@class NSString;

@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_process;
- (id)_deviceModel;
- (id)_osVersion;
- (id)_lowPowerModeEnabled;
- (void)registerSystemProperties:(id)a0;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)_deviceFreeSpaceDescription;
- (id)_percentageOfFreeSpaceOnDevice;

@end
