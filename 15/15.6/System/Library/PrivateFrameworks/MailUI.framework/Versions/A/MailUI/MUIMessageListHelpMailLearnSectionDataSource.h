@class EMObjectID;

@interface MUIMessageListHelpMailLearnSectionDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
}

- (void).cxx_destruct;
- (void)stopObserving;
- (id)initWithConfiguration:(id)a0;
- (void)_hideHelpMailLearnUntilDate:(id)a0;
- (void)beginObservingAnimated:(char)a0 nextUpdateNeedsCleanSnapshot:(char)a1;

@end
