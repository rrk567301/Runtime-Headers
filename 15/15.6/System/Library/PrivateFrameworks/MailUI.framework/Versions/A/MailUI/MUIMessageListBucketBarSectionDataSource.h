@class NSArray, EMObjectID, NSViewController;

@interface MUIMessageListBucketBarSectionDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
    NSViewController *_bucketsViewController;
    NSArray *_layoutConstraints;
}

- (void).cxx_destruct;
- (void)stopObserving;
- (void)beginObservingAnimated:(char)a0 nextUpdateNeedsCleanSnapshot:(char)a1;
- (id)initWithConfiguration:(id)a0 bucketsViewController:(id)a1;

@end
