@interface _AMiPhoto5Item : SBObject

- (id)properties;
- (void)delete;
- (void)setProperties:(id)a0;
- (id)objectClass;
- (BOOL)exists;
- (void)moveTo:(id)a0;
- (void)select;
- (void)removeFrom:(id)a0;
- (void)addTo:(id)a0;
- (void)emptyTrash;
- (void)assignKeywordString:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)importFrom:(id)a0 to:(id)a1;
- (void)newAlbumName:(id)a0;
- (void)quitSaving:(int)a0;
- (void)saveAs:(id)a0 in_:(id)a1;
- (void)startSlideshowUsingAlbum:(id)a0;
- (void)stopSlideshow;

@end
