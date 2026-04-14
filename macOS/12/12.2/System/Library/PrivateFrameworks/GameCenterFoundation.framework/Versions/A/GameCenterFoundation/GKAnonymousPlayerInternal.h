@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)alias;
- (id)playerID;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (BOOL)isAnonymousPlayer;

@end
