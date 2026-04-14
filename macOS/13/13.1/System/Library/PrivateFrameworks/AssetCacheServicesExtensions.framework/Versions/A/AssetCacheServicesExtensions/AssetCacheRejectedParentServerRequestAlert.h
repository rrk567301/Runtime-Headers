@class NSString;

@interface AssetCacheRejectedParentServerRequestAlert : AssetCacheAlert

@property (retain) NSString *parentAddress;

- (void).cxx_destruct;
- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)a0;
- (id)verboseText;
- (id)sharingPrefsAnchor;
- (id)initWithParentAddress:(id)a0;

@end
