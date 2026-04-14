@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)alias;
- (id)playerID;
- (id)gamePlayerID;
- (BOOL)isAnonymousPlayer;
- (id)teamPlayerID;

@end
