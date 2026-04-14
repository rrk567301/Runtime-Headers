@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)uuid;
- (id)hostIdentifier;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned char)defaultManageFlags;
- (BOOL)isExtension;
- (id)xpcServiceIdentifier;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)isXPCService;
- (BOOL)isAnonymous;
- (id)hostIdentity;
- (BOOL)inheritsCoalitionBand;
- (id)encodeForJob;
- (id)initWithDecodeFromJob:(id)a0;
- (BOOL)isEqualToIdentity:(id)a0;

@end
