@class RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBSExtensionIdentityProtocol;

@interface RBSExtensionProcessIdentity : RBSProcessIdentity

@property (retain) id<RBSExtensionIdentityProtocol> extensionIdentity;
@property (readonly) RBSProcessIdentity *hostIdentity;
@property (readonly) RBSProcessIdentifier *hostIdentifier;

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;
+ (id)extensionIdentityFromDataRepresentation:(id)a0;

- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)uuid;
- (BOOL)isExtension;
- (BOOL)supportsLaunchingDirectly;
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
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)isEqualToIdentity:(id)a0;
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2;
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2 auid:(unsigned int)a3;

@end
