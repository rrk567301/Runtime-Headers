@class NSString;
@protocol MTIDSecretStore;

@interface MTFrameworkEnvironment : NSObject {
    NSString *_localDataPath;
    id<MTIDSecretStore> _secretStore;
}

@property (class, retain) MTFrameworkEnvironment *sharedEnvironment;

@property (copy) NSString *localDataPath;

+ (void)initialize;
+ (void)withEnvironment:(id)a0 execute:(id /* block */)a1;

- (BOOL)isInternalBuild;
- (id)date;
- (id)valueForEntitlement:(id)a0;
- (void).cxx_destruct;
- (id)hostProcessBundleIdentifier;
- (id)metricsKitBundleIdentifier;
- (id)secretStore;
- (BOOL)useCloudKitSandbox;

@end
