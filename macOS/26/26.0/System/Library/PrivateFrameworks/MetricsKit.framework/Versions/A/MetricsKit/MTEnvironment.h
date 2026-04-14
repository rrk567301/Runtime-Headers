@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak) id<MTEnvironmentDelegate> delegate;

- (id)appVersion;
- (id)cookies;
- (id)hardwareModel;
- (id)osVersion;
- (id)hardwareFamily;
- (id)environmentDataCenter;
- (id)pageUrl;
- (id)screenHeight;
- (BOOL)isAnonymous;
- (id)userAgent;
- (id)screenWidth;
- (id)os;
- (id)connectionType;
- (void).cxx_destruct;
- (id)hostApp;
- (id)app;
- (id)pixelRatio;
- (id)dsId;
- (id)hostAppVersion;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
