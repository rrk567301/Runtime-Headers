@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (BOOL)isExtension;
- (id)uuid;
- (id)validationToken;
- (unsigned char)defaultManageFlags;
- (id)persona;
- (id)personaString;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)inheritsCoalitionBand;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isMultiInstanceExtension;
- (BOOL)supportsLaunchingDirectly;
- (id)hostIdentity;
- (BOOL)isAnonymous;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isExternal;
- (id)xpcServiceIdentifier;
- (void).cxx_destruct;
- (id)encodeForJob;
- (BOOL)isXPCService;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)hostIdentifier;
- (BOOL)_matchesIdentity:(id)a0;

@end
