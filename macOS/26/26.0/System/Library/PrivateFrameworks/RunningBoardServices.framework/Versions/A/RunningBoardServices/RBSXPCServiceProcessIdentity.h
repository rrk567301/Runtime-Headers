@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (id)personaString;
- (BOOL)isExtension;
- (BOOL)inheritsCoalitionBand;
- (id)validationToken;
- (id)persona;
- (id)hostIdentity;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)hostIdentifier;
- (unsigned char)defaultManageFlags;
- (BOOL)isAnonymous;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isXPCService;
- (id)xpcServiceIdentifier;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isMultiInstanceExtension;
- (id)uuid;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (id)encodeForJob;
- (BOOL)isExternal;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (void).cxx_destruct;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;

@end
