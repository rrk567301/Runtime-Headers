@class _NSCollectionSectionSolutionBookmark;

@interface _NSCollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject {
    _NSCollectionSectionSolutionBookmark *_bookmark;
}

@property (readonly, nonatomic) long long originalSectionIndex;

- (id)initWithBookmark:(id)a0 originalSectionIndex:(long long)a1;
- (void)applyStateToBookmark:(id)a0;
- (void).cxx_destruct;

@end
