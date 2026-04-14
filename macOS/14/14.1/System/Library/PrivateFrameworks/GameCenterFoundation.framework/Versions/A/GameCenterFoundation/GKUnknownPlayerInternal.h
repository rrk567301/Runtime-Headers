@interface GKUnknownPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (BOOL)isUnknownPlayer;
- (id)gamePlayerIDForBundleID:(id)a0;
- (id)teamPlayerIDForBundleID:(id)a0;

@end
