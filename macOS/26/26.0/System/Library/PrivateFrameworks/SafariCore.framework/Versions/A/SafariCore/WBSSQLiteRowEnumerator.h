@class WBSSQLiteStatement, WBSSQLiteRow;

@interface WBSSQLiteRowEnumerator : NSEnumerator {
    WBSSQLiteRow *_row;
}

@property (readonly, nonatomic) WBSSQLiteStatement *statement;
@property (readonly, nonatomic) int lastResultCode;

- (id)initWithResultsOfStatement:(id)a0;
- (id)nextObject;
- (void).cxx_destruct;

@end
