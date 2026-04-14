@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)alias;
- (id)playerID;
- (id)gamePlayerIDForBundleID:(id)a0;
- (BOOL)isAnonymousPlayer;
- (id)teamPlayerIDForBundleID:(id)a0;

@end
