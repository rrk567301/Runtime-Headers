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
- (float)topMargin;
- (float)leftMargin;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (void)setPageHeight:(float)a0;
- (float)pageHeight;
- (float)pageOffset;
- (BOOL)isHeaderOrFooter;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)a0;
- (unsigned long long)runIndex;
- (BOOL)containsParagraph:(id)a0;
- (void)pushParagraph:(id)a0;
- (void)popParagraph;
- (void)setRunIndex:(unsigned long long)a0;
- (BOOL)isCurrentListDefinitionId:(int)a0;
- (id)listStateForListDefinitionWithId:(int)a0 settingUpStateIfNeededWithDocument:(id)a1;
- (void)setCurrentListState:(id)a0;
- (id)currentListState;
- (void)setBlockIndex:(unsigned long long)a0;
- (BOOL)isFrame;
- (unsigned long long)blockIndex;
- (void)setIsFrame:(BOOL)a0;
- (void)setIsFrameStart:(BOOL)a0;
- (void)setIsFrameEnd:(BOOL)a0;
- (BOOL)isFrameEnd;
- (BOOL)isFrameStart;
- (void)setLastHeader:(id)a0;
- (id)lastHeader;
- (void)setIsHeaderOrFooter:(BOOL)a0;
- (void)setLastFooter:(id)a0;
- (id)lastFooter;
- (void)clearCurrentListState;
- (BOOL)isCurrentListStateOverridden;
- (id)listStateForListDefinitionId:(int)a0;
- (void)setListState:(id)a0 forListDefinitionId:(int)a1;
- (id)outlineState;

@end
