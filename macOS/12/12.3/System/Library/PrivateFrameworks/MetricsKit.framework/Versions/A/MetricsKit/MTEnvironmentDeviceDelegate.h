@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connectionType;
- (id)cookies;
- (BOOL)isAnonymous;
- (id)hostApp;
- (id)userType;
- (id)osVersion;
- (id)appVersion;
- (id)userAgent;
- (id)os;
- (id)hardwareModel;
- (id)app;
- (id)screenHeight;
- (id)screenWidth;
- (id)pageUrl;
- (id)pixelRatio;
- (id)hardwareFamily;
- (id)dsId;
- (id)resourceRevNum;
- (id)_diskUsage;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
