@class NSMutableArray;

@interface PDPresentation : OCDDocument {
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize { double width; double height; } mSlideSize;
    struct CGSize { double width; double height; } mNotesSize;
    BOOL mIsAutoPlay;
    BOOL mIsCommentsVisible;
    BOOL mIsLooping;
    BOOL mIsKiosk;
    NSMutableArray *mCommentAuthors;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)bulletBlips;
- (unsigned long long)slideMasterCount;
- (id)slideMasterAtIndex:(unsigned long long)a0;
- (void)addSlideMaster:(id)a0;
- (unsigned long long)notesMasterCount;
- (id)notesMasterAtIndex:(unsigned long long)a0;
- (void)addNotesMaster:(id)a0;
- (unsigned long long)slideCount;
- (id)slideAtIndex:(unsigned long long)a0;
- (void)addSlide:(id)a0;
- (unsigned long long)indexOfSlide:(id)a0;
- (id)bulletBlipAtIndex:(int)a0;
- (unsigned int)addBulletBlip:(id)a0;
- (unsigned int)bulletBlipCount;
- (struct CGSize { double x0; double x1; })slideSize;
- (void)setSlideSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })notesSize;
- (void)setNotesSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isAutoPlay;
- (void)setIsAutoPlay:(BOOL)a0;
- (BOOL)isCommentsVisible;
- (void)setIsCommentsVisible:(BOOL)a0;
- (BOOL)isLooping;
- (void)setIsLooping:(BOOL)a0;
- (BOOL)isKiosk;
- (void)setIsKiosk:(BOOL)a0;
- (unsigned long long)commentAuthorCount;
- (id)commentAuthorAtIndex:(unsigned long long)a0;
- (void)addCommentAuthor:(id)a0;
- (void)flushUnusedMastersAndLayouts;
- (void)ensureDefaultLayoutsForMasters;
- (void)cacheGraphicStyleForDrawable:(id)a0 colorContext:(id)a1;
- (void)cacheGraphicStylesForSlideBase:(id)a0;

@end
