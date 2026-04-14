@class PXStoryModel;
@protocol PXStorySongResource;

@interface PXStorySongController : PXStoryController

@property (retain, nonatomic) id<PXStorySongResource> currentSongResource;
@property (readonly, weak, nonatomic) PXStoryModel *model;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_updateCurrentSongResource;
- (void)_invalidateCurrentSongResource;

@end
