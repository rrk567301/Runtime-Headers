@class RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBSExtensionIdentityProtocol;

@interface RBSExtensionProcessIdentity : RBSProcessIdentity

@property (retain) id<RBSExtensionIdentityProtocol> extensionIdentity;
@property (readonly) RBSProcessIdentity *hostIdentity;
@property (readonly) RBSProcessIdentifier *hostIdentifier;

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;
+ (id)extensionIdentityFromDataRepresentation:(id)a0;

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
- (BOOL)isAnonymous;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isExternal;
- (void).cxx_destruct;
- (id)encodeForJob;
- (BOOL)isXPCService;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2;
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2 auid:(unsigned int)a3;

@end
