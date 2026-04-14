@class NSString, NSBundle, NSURL;

@interface HMFProcessInfo : HMFObject <HMFLogging>

@property (class, readonly) HMFProcessInfo *processInfo;

@property (readonly) int identifier;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSURL *executableURL;
@property (readonly, copy) NSURL *mainBundleURL;
@property (readonly, copy) NSBundle *mainBundle;
@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSString *signingIdentifier;
@property (readonly, getter=isCodeSigned) BOOL codeSigned;
@property (readonly, getter=isPlatformBinary) BOOL platformBinary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)bundleIdentifierAndTeamIdentifierFromApplicationIdentifier:(id)a0 bundleIdentifier:(id *)a1 teamIdentifier:(id *)a2;
+ (id)processInfoForXPCConnection:(id)a0;

- (id)shortDescription;
- (id)initWithXPCConnection:(id)a0;
- (id)logIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)valueForEntitlement:(id)a0;
- (void).cxx_destruct;
- (BOOL)getAuditToken:(struct { unsigned int x0[8]; } *)a0;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end
