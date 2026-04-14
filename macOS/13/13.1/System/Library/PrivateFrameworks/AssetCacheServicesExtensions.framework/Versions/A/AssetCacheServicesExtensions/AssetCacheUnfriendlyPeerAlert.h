@class NSString;

@interface AssetCacheUnfriendlyPeerAlert : AssetCacheAlert

@property (retain) NSString *peerAddress;

- (void).cxx_destruct;
- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)a0;
- (id)verboseText;
- (id)sharingPrefsAnchor;
- (id)initWithPeerAddress:(id)a0;

@end
