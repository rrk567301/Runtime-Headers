@class _WKWebExtensionSQLiteStatement, _WKWebExtensionSQLiteRow;

@interface _WKWebExtensionSQLiteRowEnumerator : NSEnumerator {
    _WKWebExtensionSQLiteRow *_row;
}

@property (readonly, nonatomic) _WKWebExtensionSQLiteStatement *statement;
@property (readonly, nonatomic) int lastResultCode;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithResultsOfStatement:(id)a0;

@end
