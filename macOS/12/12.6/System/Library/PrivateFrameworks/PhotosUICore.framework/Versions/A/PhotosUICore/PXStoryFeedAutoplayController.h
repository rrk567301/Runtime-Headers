@class NSMapTable, _PXStoryFeedInlinePlaybackController;

@interface PXStoryFeedAutoplayController : NSObject

@property (readonly, nonatomic) _PXStoryFeedInlinePlaybackController *inlinePlaybackController;
@property (readonly, nonatomic) NSMapTable *playbackRecordsByItemLayout;
@property (nonatomic) BOOL isContainerLayoutVisible;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContainerLayout:(id)a0 itemLayoutDesiredPlayStateSetter:(id /* block */)a1;
- (void)containerLayoutVisibleRectDidChange;
- (void)addItemLayout:(id)a0 withDisplayAsset:(id)a1;
- (void)removeItemLayout:(id)a0;

@end
