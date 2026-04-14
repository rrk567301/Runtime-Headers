@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)screenWidth;
- (id)hardwareModel;
- (id)pageUrl;
- (id)cookies;
- (id)osVersion;
- (id)userType;
- (id)osBuildNumber;
- (id)connectionType;
- (id)appVersion;
- (id)screenHeight;
- (id)userAgent;
- (BOOL)isAnonymous;
- (id)os;
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
