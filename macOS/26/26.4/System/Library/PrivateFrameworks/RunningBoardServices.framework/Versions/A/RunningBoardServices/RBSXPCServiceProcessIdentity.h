@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (id)hostIdentifier;
- (id)copyWithAuid:(unsigned int)a0;
- (id)validationToken;
- (BOOL)isExtension;
- (BOOL)isExternal;
- (id)hostIdentity;
- (id)encodeForJob;
- (BOOL)isMultiInstanceExtension;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)persona;
- (unsigned char)defaultManageFlags;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)personaString;
- (void).cxx_destruct;
- (id)xpcServiceIdentifier;
- (BOOL)_matchesIdentity:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isXPCService;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)uuid;
- (BOOL)isAnonymous;
- (BOOL)inheritsCoalitionBand;

@end
