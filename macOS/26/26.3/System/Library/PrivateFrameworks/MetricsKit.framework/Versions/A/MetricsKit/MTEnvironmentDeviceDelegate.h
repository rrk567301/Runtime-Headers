@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)osVersion;
- (id)userAgent;
- (id)os;
- (id)userType;
- (id)hardwareModel;
- (id)connectionType;
- (id)screenWidth;
- (id)screenHeight;
- (BOOL)isAnonymous;
- (id)pageUrl;
- (id)appVersion;
- (id)osBuildNumber;
- (id)cookies;
- (id)hardwareFamily;
- (id)hostApp;
- (id)app;
- (id)pixelRatio;
- (id)dsId;
- (id)_diskUsage;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
