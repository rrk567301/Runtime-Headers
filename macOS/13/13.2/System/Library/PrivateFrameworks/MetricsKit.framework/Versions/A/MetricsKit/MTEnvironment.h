@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak) id<MTEnvironmentDelegate> delegate;

- (void).cxx_destruct;
- (id)connectionType;
- (id)cookies;
- (BOOL)isAnonymous;
- (id)hostApp;
- (id)osVersion;
- (id)userAgent;
- (id)os;
- (id)hardwareModel;
- (id)appVersion;
- (id)app;
- (id)screenHeight;
- (id)screenWidth;
- (id)environmentDataCenter;
- (id)pageUrl;
- (id)pixelRatio;
- (id)dsId;
- (id)hostAppVersion;
- (id)resourceRevNum;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)hardwareFamily;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)parentPageUrl;

@end
