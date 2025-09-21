@class SGTSuggestion, NSTokenFieldCell;

@interface SGTSearchFieldCellReserved : NSObject {
    NSTokenFieldCell *tokenFieldCell;
    SGTSuggestion *suggestion;
    char useTokens;
    char _cancelInProgress;
}

- (void).cxx_destruct;

@end
