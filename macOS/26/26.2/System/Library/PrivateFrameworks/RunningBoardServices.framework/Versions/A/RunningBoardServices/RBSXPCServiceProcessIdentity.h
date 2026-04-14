@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (id)hostIdentifier;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)uuid;
- (BOOL)isExtension;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (BOOL)supportsLaunchingDirectly;
- (id)hostIdentity;
- (unsigned char)defaultManageFlags;
- (BOOL)isExternal;
- (BOOL)inheritsCoalitionBand;
- (id)persona;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)encodeForJob;
- (BOOL)isXPCService;
- (BOOL)_matchesIdentity:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)personaString;
- (BOOL)isMultiInstanceExtension;
- (BOOL)isAnonymous;
- (id)validationToken;
- (id)xpcServiceIdentifier;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)isEqualToIdentity:(id)a0;

@end
