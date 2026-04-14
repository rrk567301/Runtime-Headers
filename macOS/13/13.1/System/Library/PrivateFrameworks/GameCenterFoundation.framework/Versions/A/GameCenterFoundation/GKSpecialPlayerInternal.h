@interface GKSpecialPlayerInternal : GKPlayerInternal

+ (BOOL)supportsSecureCoding;

- (BOOL)isLoaded;
- (id)compositeName;
- (id)alias;
- (id)photos;
- (void)setPhotos:(id)a0;
- (void)setAlias:(id)a0;
- (id)playerID;
- (void)setPlayerID:(id)a0;
- (id)gamePlayerID;
- (id)teamPlayerID;
- (void)setGamePlayerID:(id)a0;
- (void)setTeamPlayerID:(id)a0;

@end
