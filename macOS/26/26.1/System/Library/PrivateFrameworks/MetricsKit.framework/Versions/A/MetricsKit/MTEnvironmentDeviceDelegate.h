@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)osVersion;
- (id)hardwareModel;
- (id)userAgent;
- (id)osBuildNumber;
- (id)pageUrl;
- (id)cookies;
- (id)connectionType;
- (id)appVersion;
- (id)screenWidth;
- (id)userType;
- (BOOL)isAnonymous;
- (id)os;
- (id)hardwareFamily;
- (id)screenHeight;
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
