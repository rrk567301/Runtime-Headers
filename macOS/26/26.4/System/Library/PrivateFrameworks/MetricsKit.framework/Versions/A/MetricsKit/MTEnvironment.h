@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak) id<MTEnvironmentDelegate> delegate;

- (id)hardwareModel;
- (id)storeFrontHeader;
- (id)userAgent;
- (id)osVersion;
- (id)appVersion;
- (id)screenWidth;
- (id)environmentDataCenter;
- (id)connectionType;
- (id)screenHeight;
- (id)hardwareFamily;
- (void).cxx_destruct;
- (id)osBuildNumber;
- (id)os;
- (id)pageUrl;
- (id)cookies;
- (BOOL)isAnonymous;
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
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
