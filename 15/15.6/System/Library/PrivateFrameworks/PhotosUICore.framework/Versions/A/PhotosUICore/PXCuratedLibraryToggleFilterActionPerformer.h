@class PXContentFilterState;

@interface PXCuratedLibraryToggleFilterActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXContentFilterState *currentContentFilterState;

- (void)finishedUserInteractionTask;
- (char)updateToContentFilterStateAndFinishTask:(id)a0;
- (char)updateToLibraryFilterStateAndFinishTask:(id)a0;

@end
