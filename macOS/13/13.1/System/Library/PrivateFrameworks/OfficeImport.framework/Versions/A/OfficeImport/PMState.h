@class OADTablePartStyle, CMOutlineState;

@interface PMState : CMState {
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}

- (id)init;
- (void).cxx_destruct;
- (id)listState;
- (void)setCurrentRowStyle:(id)a0;
- (id)currentRowStyle;

@end
