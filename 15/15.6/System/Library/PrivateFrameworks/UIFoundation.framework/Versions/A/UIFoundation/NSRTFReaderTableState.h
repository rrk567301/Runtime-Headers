@class NSMutableArray, NSTextTable;

@interface NSRTFReaderTableState : NSObject {
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    char _currentRowIsLast;
}

- (void)dealloc;

@end
