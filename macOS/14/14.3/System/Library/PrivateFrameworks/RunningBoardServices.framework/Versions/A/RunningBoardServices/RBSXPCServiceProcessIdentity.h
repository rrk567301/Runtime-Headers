@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)uuid;
- (id)validationToken;
- (BOOL)isExternal;
- (id)hostIdentifier;
- (id)persona;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (unsigned char)defaultManageFlags;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)hostIdentity;
- (BOOL)inheritsCoalitionBand;
- (id)initWithDecodeFromJob:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isExtension;
- (BOOL)isXPCService;
- (BOOL)matchesRecoveredIdentity:(id)a0;
- (id)personaString;
- (BOOL)supportsLaunchingDirectly;
- (id)xpcServiceIdentifier;

@end
