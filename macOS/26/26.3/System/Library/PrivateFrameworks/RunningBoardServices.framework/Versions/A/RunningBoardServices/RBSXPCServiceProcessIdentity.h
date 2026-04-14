@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (BOOL)isXPCService;
- (id)persona;
- (id)personaString;
- (BOOL)isExtension;
- (id)encodeForJob;
- (id)copyWithAuid:(unsigned int)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)xpcServiceIdentifier;
- (BOOL)isAnonymous;
- (BOOL)inheritsCoalitionBand;
- (id)hostIdentity;
- (BOOL)isMultiInstanceExtension;
- (id)uuid;
- (id)validationToken;
- (void).cxx_destruct;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (BOOL)isExternal;
- (unsigned char)defaultManageFlags;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (BOOL)isEqualToIdentity:(id)a0;
- (id)hostIdentifier;
- (BOOL)supportsLaunchingDirectly;

@end
