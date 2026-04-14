@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak) id<MTEnvironmentDelegate> delegate;

- (id)osVersion;
- (id)environmentDataCenter;
- (id)userAgent;
- (id)os;
- (id)hardwareModel;
- (id)connectionType;
- (id)screenWidth;
- (id)screenHeight;
- (BOOL)isAnonymous;
- (id)pageUrl;
- (id)appVersion;
- (id)osBuildNumber;
- (void).cxx_destruct;
- (id)cookies;
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
