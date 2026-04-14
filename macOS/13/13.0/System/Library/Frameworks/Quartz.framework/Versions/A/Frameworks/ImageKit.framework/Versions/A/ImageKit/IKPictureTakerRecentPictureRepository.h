@interface IKPictureTakerRecentPictureRepository : NSObject

+ (id)recentRepository;

- (id)recentPictures;
- (void)addRecent:(id)a0;
- (void)removeRecent:(id)a0;
- (void)clearRecents:(BOOL)a0;

@end
