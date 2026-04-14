@class RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBSExtensionIdentityProtocol;

@interface RBSExtensionProcessIdentity : RBSProcessIdentity

@property (retain) id<RBSExtensionIdentityProtocol> extensionIdentity;
@property (readonly) RBSProcessIdentity *hostIdentity;
@property (readonly) RBSProcessIdentifier *hostIdentifier;

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;
+ (id)extensionIdentityFromDataRepresentation:(id)a0;

- (id)copyWithAuid:(unsigned int)a0;
- (id)validationToken;
- (BOOL)isExtension;
- (BOOL)isExternal;
- (id)encodeForJob;
- (BOOL)isMultiInstanceExtension;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)persona;
- (unsigned char)defaultManageFlags;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)personaString;
- (void).cxx_destruct;
- (BOOL)_matchesIdentity:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isXPCService;
- (id)uuid;
- (BOOL)isAnonymous;
- (BOOL)inheritsCoalitionBand;
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2;
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2 auid:(unsigned int)a3;

@end
