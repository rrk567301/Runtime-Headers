@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak) id<MTEnvironmentDelegate> delegate;

- (id)environmentDataCenter;
- (id)screenWidth;
- (id)hardwareModel;
- (id)pageUrl;
- (id)cookies;
- (id)osVersion;
- (id)osBuildNumber;
- (id)connectionType;
- (id)appVersion;
- (id)screenHeight;
- (id)userAgent;
- (void).cxx_destruct;
- (BOOL)isAnonymous;
- (id)os;
- (id)hardwareFamily;
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
