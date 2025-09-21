@class NSMutableArray;

@interface PDPresentation : OCDDocument {
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize { double width; double height; } mSlideSize;
    struct CGSize { double width; double height; } mNotesSize;
    char mIsAutoPlay;
    char mIsCommentsVisible;
    char mIsLooping;
    char mIsKiosk;
    NSMutableArray *mCommentAuthors;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addNotesMaster:(id)a0;
- (unsigned int)bulletBlipCount;
- (void)addSlideMaster:(id)a0;
- (void)cacheGraphicStylesForSlideBase:(id)a0;
- (char)isKiosk;
- (unsigned int)addBulletBlip:(id)a0;
- (void)addCommentAuthor:(id)a0;
- (void)addSlide:(id)a0;
- (id)bulletBlipAtIndex:(int)a0;
- (id)bulletBlips;
- (void)cacheGraphicStyleForDrawable:(id)a0 colorContext:(id)a1;
- (id)commentAuthorAtIndex:(unsigned long long)a0;
- (unsigned long long)commentAuthorCount;
- (void)ensureDefaultLayoutsForMasters;
- (void)flushUnusedMastersAndLayouts;
- (unsigned long long)indexOfSlide:(id)a0;
- (char)isAutoPlay;
- (char)isCommentsVisible;
- (char)isLooping;
- (id)notesMasterAtIndex:(unsigned long long)a0;
- (unsigned long long)notesMasterCount;
- (struct CGSize { double x0; double x1; })notesSize;
- (void)removeUnnecessaryOverrides;
- (void)setIsAutoPlay:(char)a0;
- (void)setIsCommentsVisible:(char)a0;
- (void)setIsKiosk:(char)a0;
- (void)setIsLooping:(char)a0;
- (void)setNotesSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSlideSize:(struct CGSize { double x0; double x1; })a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideAtIndex:(unsigned long long)a0;
- (unsigned long long)slideCount;
- (id)slideMasterAtIndex:(unsigned long long)a0;
- (unsigned long long)slideMasterCount;
- (struct CGSize { double x0; double x1; })slideSize;

@end
