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

+ (void)bundleIdentifierAndTeamIdentifierFromApplicationIdentifier:(id)a0 bundleIdentifier:(id *)a1 teamIdentifier:(id *)a2;
+ (id)logCategory;
+ (id)processInfoForXPCConnection:(id)a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithXPCConnection:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)init;
- (BOOL)getAuditToken:(struct { unsigned int x0[8]; } *)a0;

@end
