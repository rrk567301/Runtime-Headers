@class NSString, NSDictionary, NSURL, NSSet;

@interface RBLSBundleProperties : NSObject <RBBundleProperties>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSString *containerOverrideIdentifier;
@property (readonly, nonatomic) NSDictionary *environmentVariables;
@property (readonly, nonatomic) NSSet *groupIdentifiers;
@property (readonly, nonatomic) BOOL supportsBackgroundContentFetching;
@property (readonly, nonatomic) BOOL supportsBackgroundNetworkAuthentication;
@property (readonly, nonatomic) BOOL supportsBackgroundAudio;
@property (readonly, nonatomic) BOOL supportsUnboundedTaskCompletion;
@property (readonly, nonatomic) BOOL usesSocketMonitoring;
@property (readonly, nonatomic) BOOL continuousBackgroundMode;
@property (readonly, nonatomic) int preferredJetsamBand;
@property (readonly, nonatomic) BOOL hasPreferredJetsamBand;
@property (readonly, nonatomic) BOOL isExtension;
@property (readonly, nonatomic) int platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)bundleInfoValuesForKeys:(id)a0;

@end
