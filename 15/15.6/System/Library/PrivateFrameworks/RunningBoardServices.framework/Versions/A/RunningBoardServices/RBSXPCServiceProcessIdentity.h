@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (char)shouldManageExtensionWithExtensionPoint:(id)a0;

- (void).cxx_destruct;
- (id)uuid;
- (id)validationToken;
- (char)isExternal;
- (id)hostIdentifier;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)persona;
- (char)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (unsigned char)defaultManageFlags;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)hostIdentity;
- (char)inheritsCoalitionBand;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (char)isAnonymous;
- (char)isEqualToIdentity:(id)a0;
- (char)isExtension;
- (char)isMultiInstanceExtension;
- (char)isXPCService;
- (id)personaString;
- (char)supportsLaunchingDirectly;
- (id)xpcServiceIdentifier;

@end
