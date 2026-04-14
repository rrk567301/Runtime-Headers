@class EMObjectID;

@interface MUIMessageListHelpMailLearnSectionDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
}

- (void)stopObserving;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_hideHelpMailLearnUntilDate:(id)a0;
- (void)beginObservingAnimated:(BOOL)a0 nextUpdateNeedsCleanSnapshot:(BOOL)a1;

@end
