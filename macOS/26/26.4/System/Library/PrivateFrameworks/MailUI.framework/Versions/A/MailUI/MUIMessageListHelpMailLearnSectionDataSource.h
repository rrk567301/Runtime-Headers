@class EMObjectID;

@interface MUIMessageListHelpMailLearnSectionDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
}

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)_hideHelpMailLearnUntilDate:(id)a0;
- (void)beginObservingAnimated:(BOOL)a0 nextUpdateNeedsCleanSnapshot:(BOOL)a1;

@end
