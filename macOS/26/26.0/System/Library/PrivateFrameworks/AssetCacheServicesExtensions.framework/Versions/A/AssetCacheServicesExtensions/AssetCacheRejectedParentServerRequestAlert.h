@class NSString;

@interface AssetCacheRejectedParentServerRequestAlert : AssetCacheAlert

@property (retain) NSString *parentAddress;

- (id)externalRepresentation;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)a0;
- (id)initWithParentAddress:(id)a0;
- (id)sharingPrefsAnchor;
- (id)verboseText;

@end
