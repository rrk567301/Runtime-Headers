@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)uuid;
- (id)validationToken;
- (id)hostIdentifier;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)encodeForJob;
- (id)initWithDecodeFromJob:(id)a0;
- (BOOL)isExtension;
- (unsigned char)defaultManageFlags;
- (BOOL)isXPCService;
- (id)xpcServiceIdentifier;
- (id)hostIdentity;
- (id)persona;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)inheritsCoalitionBand;
- (BOOL)isEqualToIdentity:(id)a0;

@end
