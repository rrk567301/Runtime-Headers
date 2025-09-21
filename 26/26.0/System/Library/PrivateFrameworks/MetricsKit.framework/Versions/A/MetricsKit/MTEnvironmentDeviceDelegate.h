@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appVersion;
- (id)cookies;
- (id)hardwareModel;
- (id)osVersion;
- (id)hardwareFamily;
- (id)pageUrl;
- (id)screenHeight;
- (BOOL)isAnonymous;
- (id)userAgent;
- (id)screenWidth;
- (id)userType;
- (id)os;
- (id)connectionType;
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
- (id)osBuildNumber;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
