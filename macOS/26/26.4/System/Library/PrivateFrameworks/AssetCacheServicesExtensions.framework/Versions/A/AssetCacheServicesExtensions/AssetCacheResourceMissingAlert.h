@class NSString;

@interface AssetCacheResourceMissingAlert : AssetCacheAlert

@property (retain) NSString *resource;
@property (retain) NSString *pathPreventingAccess;

- (id)externalRepresentation;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)a0;
- (id)initWithResource:(id)a0 pathPreventingAccess:(id)a1;
- (id)sharingPrefsAnchor;
- (id)verboseText;

@end
