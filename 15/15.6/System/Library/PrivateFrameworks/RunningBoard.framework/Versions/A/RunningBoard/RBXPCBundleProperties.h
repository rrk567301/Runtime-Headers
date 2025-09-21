@class NSString, NSDictionary, NSURL, NSCache;

@interface RBXPCBundleProperties : NSObject <RBBundleProperties> {
    int _pid;
    NSCache *_plistValues;
    char _canFetchBundle;
}

@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSDictionary *environmentVariables;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) NSString *containerOverrideIdentifier;
@property (readonly, nonatomic) char supportsBackgroundContentFetching;
@property (readonly, nonatomic) char supportsBackgroundNetworkAuthentication;
@property (readonly, nonatomic) char supportsBackgroundAudio;
@property (readonly, nonatomic) char supportsUnboundedTaskCompletion;
@property (readonly, nonatomic) char usesSocketMonitoring;
@property (readonly, nonatomic) char continuousBackgroundMode;
@property (readonly, nonatomic) int preferredJetsamBand;
@property (readonly, nonatomic) char hasPreferredJetsamBand;
@property (readonly, nonatomic) char isExtension;
@property (readonly, nonatomic) int platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPID:(int)a0;
- (id)bundleInfoValuesForKeys:(id)a0;

@end
