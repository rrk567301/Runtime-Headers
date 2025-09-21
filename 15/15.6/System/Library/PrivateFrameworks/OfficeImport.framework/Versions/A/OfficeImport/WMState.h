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
    char mIsFrame;
    char mIsFrameStart;
    char mIsFrameEnd;
    char mIsHeaderOrFooter;
    float mTotalPageHeight;
}

@property (retain) NSMutableArray *paragraphStack;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentPage:(unsigned int)a0;
- (unsigned int)currentPage;
- (float)leftMargin;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (float)topMargin;
- (char)containsParagraph:(id)a0;
- (float)pageHeight;
- (void)setPageHeight:(float)a0;
- (char)isFrame;
- (float)totalPageHeight;
- (unsigned long long)blockIndex;
- (void)clearCurrentListState;
- (id)currentListState;
- (char)isCurrentListDefinitionId:(int)a0;
- (char)isCurrentListStateOverridden;
- (char)isFrameEnd;
- (char)isFrameStart;
- (char)isHeaderOrFooter;
- (id)lastFooter;
- (id)lastHeader;
- (id)listStateForListDefinitionId:(int)a0;
- (id)listStateForListDefinitionWithId:(int)a0 settingUpStateIfNeededWithDocument:(id)a1;
- (id)outlineState;
- (float)pageOffset;
- (void)popParagraph;
- (void)pushParagraph:(id)a0;
- (unsigned long long)runIndex;
- (void)setBlockIndex:(unsigned long long)a0;
- (void)setCurrentListState:(id)a0;
- (void)setIsFrame:(char)a0;
- (void)setIsFrameEnd:(char)a0;
- (void)setIsFrameStart:(char)a0;
- (void)setIsHeaderOrFooter:(char)a0;
- (void)setLastFooter:(id)a0;
- (void)setLastHeader:(id)a0;
- (void)setListState:(id)a0 forListDefinitionId:(int)a1;
- (void)setRunIndex:(unsigned long long)a0;
- (void)setTotalPageHeight:(float)a0;

@end
