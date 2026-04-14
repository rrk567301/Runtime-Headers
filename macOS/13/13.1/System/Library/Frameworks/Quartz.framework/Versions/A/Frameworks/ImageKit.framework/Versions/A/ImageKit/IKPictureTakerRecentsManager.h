@class NSMutableArray;
@protocol IKPTRecentsService;

@interface IKPictureTakerRecentsManager : NSObject {
    id<IKPTRecentsService> _recentsService;
    NSMutableArray *_recents;
}

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (id)userPictureData;
- (id)recentPictures;
- (void)addRecent:(id)a0;
- (void)removeRecent:(id)a0;
- (void)clearRecents:(BOOL)a0;
- (id)recentsService;
- (id)recentPictureWithInfo:(id)a0 thumbnail:(id)a1;
- (void)pullRecentPicturesAsync:(BOOL)a0;
- (id)originalImageForRecentPicture:(id)a0;
- (id)recentPictureWithID:(id)a0;
- (id)bestRepresentationForRecentPicture:(id)a0;
- (void)pushRecentPicturesAsync:(BOOL)a0;
- (void)eraseRecentPictures:(id)a0 async:(BOOL)a1;
- (void)addRecent:(id)a0 includingCurrent:(id)a1;
- (void)updateRecentPicture:(id)a0 setCropInfo:(id)a1 smallIcon:(id)a2;
- (void)setRecentPictureAsCurrent:(id)a0;

@end
