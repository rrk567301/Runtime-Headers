@class NSArray;

@interface AssetCacheUnfriendlyPeersInFilterRangeAlert : AssetCacheAlert

@property unsigned long long peerFilterRangeIndex;
@property (retain) NSArray *addresses;

- (void).cxx_destruct;
- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)a0;
- (id)verboseText;
- (id)sharingPrefsAnchor;
- (id)initWithPeerFilterRangeIndex:(unsigned long long)a0 addresses:(id)a1;

@end
