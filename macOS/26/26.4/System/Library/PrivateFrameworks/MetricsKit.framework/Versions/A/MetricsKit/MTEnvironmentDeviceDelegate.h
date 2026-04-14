@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hardwareModel;
- (id)storeFrontHeader;
- (id)userAgent;
- (id)osVersion;
- (id)appVersion;
- (id)screenWidth;
- (id)connectionType;
- (id)screenHeight;
- (id)hardwareFamily;
- (id)osBuildNumber;
- (id)os;
- (id)pageUrl;
- (id)userType;
- (id)cookies;
- (BOOL)isAnonymous;
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
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
