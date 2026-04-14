@class NSString;

@interface AssetCacheUnfriendlyPeerAlert : AssetCacheAlert

@property (retain) NSString *peerAddress;

- (id)externalRepresentation;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)a0;
- (id)initWithPeerAddress:(id)a0;
- (id)sharingPrefsAnchor;
- (id)verboseText;

@end
