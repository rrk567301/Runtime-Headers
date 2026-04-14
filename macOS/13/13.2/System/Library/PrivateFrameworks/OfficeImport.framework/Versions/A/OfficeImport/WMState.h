@class WDText, NSMutableDictionary, NSMutableArray, CMOutlineState;

@interface WMState : CMState {
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    unsigned long long mBlockIndex;
    unsigned long long mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    BOOL mIsFrame;
    BOOL mIsFrameStart;
    BOOL mIsFrameEnd;
    BOOL mIsHeaderOrFooter;
    float mTotalPageHeight;
}

@property (retain) NSMutableArray *paragraphStack;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)currentPage;
- (void)setCurrentPage:(unsigned int)a0;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (float)leftMargin;
- (float)topMargin;
- (void)setPageHeight:(float)a0;
- (float)pageHeight;
- (id)currentListState;
- (id)outlineState;
- (void)setCurrentListState:(id)a0;
- (BOOL)isCurrentListStateOverridden;
- (BOOL)isCurrentListDefinitionId:(int)a0;
- (void)clearCurrentListState;
- (id)listStateForListDefinitionId:(int)a0;
- (id)listStateForListDefinitionWithId:(int)a0 settingUpStateIfNeededWithDocument:(id)a1;
- (void)setListState:(id)a0 forListDefinitionId:(int)a1;
- (float)pageOffset;
- (void)setRunIndex:(unsigned long long)a0;
- (unsigned long long)runIndex;
- (void)setBlockIndex:(unsigned long long)a0;
- (unsigned long long)blockIndex;
- (void)setTotalPageHeight:(float)a0;
- (float)totalPageHeight;
- (void)setLastHeader:(id)a0;
- (id)lastHeader;
- (void)setLastFooter:(id)a0;
- (id)lastFooter;
- (void)setIsFrame:(BOOL)a0;
- (BOOL)isFrame;
- (void)setIsFrameStart:(BOOL)a0;
- (BOOL)isFrameStart;
- (void)setIsFrameEnd:(BOOL)a0;
- (BOOL)isFrameEnd;
- (void)setIsHeaderOrFooter:(BOOL)a0;
- (BOOL)isHeaderOrFooter;
- (void)pushParagraph:(id)a0;
- (void)popParagraph;
- (BOOL)containsParagraph:(id)a0;

@end
