@class RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBSExtensionIdentityProtocol;

@interface RBSExtensionProcessIdentity : RBSProcessIdentity

@property (retain) id<RBSExtensionIdentityProtocol> extensionIdentity;
@property (readonly) RBSProcessIdentity *hostIdentity;
@property (readonly) RBSProcessIdentifier *hostIdentifier;

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;
+ (id)extensionIdentityFromDataRepresentation:(id)a0;

- (id)personaString;
- (BOOL)isExtension;
- (BOOL)inheritsCoalitionBand;
- (id)validationToken;
- (id)persona;
- (unsigned char)defaultManageFlags;
- (BOOL)isAnonymous;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isXPCService;
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
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2;
- (id)_initWithExtensionIdentity:(id)a0 hostIdentity:(id)a1 hostIdentifier:(id)a2 auid:(unsigned int)a3;

@end
