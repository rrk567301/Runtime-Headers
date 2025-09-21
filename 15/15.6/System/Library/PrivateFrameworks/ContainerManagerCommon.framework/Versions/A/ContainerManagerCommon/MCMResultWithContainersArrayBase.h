@class NSArray, MCMError, MCMClientIdentity, NSString;

@interface MCMResultWithContainersArrayBase : MCMResultBase <MCMResultWithContainersArray>

@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) char skipSandboxExtensions;
@property (readonly, nonatomic) NSArray *containerPaths;
@property (readonly, nonatomic) NSArray *containerIdentities;
@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) char includePath;
@property (readonly, nonatomic) char includeInfo;
@property (readonly, nonatomic) char includeUserManagedAssetsRelPath;
@property (readonly, nonatomic) char includeCreator;
@property (readonly, nonatomic) MCMError *error;
@property (nonatomic, getter=isCacheable) char cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
