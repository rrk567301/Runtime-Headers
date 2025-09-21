@class NSString, NSUUID, RBSProcessIdentity, NSDictionary;

@interface RBLaunchdProperties : NSObject {
    long long _type;
    NSString *_path;
    char _explicitAngelFlag;
    char _doesOverrideHasBackoff;
}

@property (readonly, nonatomic, getter=isXPCService) char XPCService;
@property (readonly, nonatomic, getter=isDaemon) char daemon;
@property (readonly, nonatomic, getter=isAngel) char angel;
@property (readonly, nonatomic, getter=isMultiInstance) char multiInstance;
@property (readonly, nonatomic, getter=hasVariableEUID) char variableEUID;
@property (readonly, nonatomic) char doesOverrideManagement;
@property (readonly, nonatomic) unsigned char overrideManageFlags;
@property (readonly, nonatomic) char hasBackoff;
@property (readonly, nonatomic) NSString *jobLabel;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) int hostPid;
@property (readonly, nonatomic) NSString *underlyingAssertion;
@property (readonly, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *homeDirectory;
@property (readonly, copy, nonatomic) NSString *tmpDirectory;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) RBSProcessIdentity *specifiedIdentity;
@property (readonly, copy, nonatomic) NSDictionary *managedEndpointByLaunchIdentifier;

+ (id)processIdentityForEndpoint:(id)a0;
+ (id)_instanceWithProperties:(id)a0;
+ (id)propertiesForJob:(id)a0;
+ (id)propertiesForLabel:(id)a0 error:(id *)a1;
+ (id)propertiesForPid:(int)a0;

- (void).cxx_destruct;
- (id)_initWithProperties:(id)a0;
- (id)_configureAppWithProperties:(id)a0;
- (id)_configureDaemonOrAngelWithProperties:(id)a0 path:(id)a1 isAngel:(char)a2;
- (id)_configureXPCServiceWithProperties:(id)a0;
- (void)_parseAdditionalProperties:(id)a0;
- (void)_parseEndpoints:(id)a0 withAdditionalProperties:(id)a1;
- (void)_parseLASSProperties:(id)a0;
- (id)resolvedIdentity;
- (id)resolvedIdentityWithPid:(int)a0 auid:(unsigned int)a1;

@end
