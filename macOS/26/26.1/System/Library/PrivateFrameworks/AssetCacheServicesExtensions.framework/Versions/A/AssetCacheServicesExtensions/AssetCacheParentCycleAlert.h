@class NSArray;

@interface AssetCacheParentCycleAlert : AssetCacheAlert

@property (retain) NSArray *addresses;

- (id)externalRepresentation;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)a0;
- (id)initWithAddresses:(id)a0;
- (id)sharingPrefsAnchor;
- (id)verboseText;

@end
