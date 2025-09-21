@class NSString;

@interface VUIJSDevice : VUIJSObject <VUIJSDevice> {
    id _networkPropertiesChangedToken;
}

@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) char isInRetailDemoMode;
@property (readonly, nonatomic) char isSeedBuild;
@property (readonly, nonatomic) char runningAnInternalBuild;
@property (readonly, nonatomic) NSString *osBuildNumber;
@property (readonly, nonatomic) char supportsSharedWatchPostPlayBinge;
@property (readonly, nonatomic) char nativeDisplaysPlaybackModePrompt;

+ (char)isSearchEnabled;
+ (id)getMobileGestaltString:(struct __CFString { } *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;

@end
