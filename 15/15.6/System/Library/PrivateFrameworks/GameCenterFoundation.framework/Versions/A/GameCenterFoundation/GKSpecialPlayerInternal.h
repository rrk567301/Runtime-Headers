@interface GKSpecialPlayerInternal : GKPlayerInternal

+ (char)supportsSecureCoding;

- (char)isLoaded;
- (id)compositeName;
- (id)alias;
- (id)photos;
- (void)setAlias:(id)a0;
- (void)setPhotos:(id)a0;
- (id)playerID;
- (void)setPlayerID:(id)a0;

@end
