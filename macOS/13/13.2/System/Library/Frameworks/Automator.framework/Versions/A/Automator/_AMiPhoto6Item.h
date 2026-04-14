@class NSDictionary;

@interface _AMiPhoto6Item : SBObject

@property (copy) NSDictionary *properties;

- (void)select;
- (void)delete;
- (BOOL)exists;
- (void)removeFrom:(id)a0;
- (void)addTo:(id)a0;
- (void)emptyTrash;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)moveTo:(id)a0;
- (void)assignKeywordString:(id)a0;
- (void)duplicateTo:(id)a0;
- (id)newAlbumName:(id)a0;
- (void)stopSlideshow;
- (void)saveAs:(id)a0 in:(id)a1;
- (void)autoImport;
- (void)importFrom:(id)a0 forceCopy:(long long)a1 to:(id)a2;
- (void)nextSlide;
- (void)previousSlide;
- (void)startSlideshowAsynchronous:(long long)a0 displayIndex:(long long)a1 iChat:(long long)a2 usingAlbum:(id)a3;

@end
