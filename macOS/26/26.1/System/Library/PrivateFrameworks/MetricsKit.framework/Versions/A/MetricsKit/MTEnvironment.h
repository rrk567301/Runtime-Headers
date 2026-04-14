@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak) id<MTEnvironmentDelegate> delegate;

- (id)osVersion;
- (id)environmentDataCenter;
- (id)hardwareModel;
- (id)userAgent;
- (id)osBuildNumber;
- (id)pageUrl;
- (id)cookies;
- (id)connectionType;
- (id)appVersion;
- (id)screenWidth;
- (BOOL)isAnonymous;
- (id)os;
- (id)hardwareFamily;
- (id)screenHeight;
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
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
