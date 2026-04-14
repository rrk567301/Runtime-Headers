@class _WKWebExtensionSQLiteStatement, _WKWebExtensionSQLiteRow;

@interface _WKWebExtensionSQLiteRowEnumerator : NSEnumerator {
    _WKWebExtensionSQLiteRow *_row;
}

@property (readonly, nonatomic) _WKWebExtensionSQLiteStatement *statement;
@property (readonly, nonatomic) int lastResultCode;

- (id)nextObject;
- (id)initWithResultsOfStatement:(id)a0;
- (void).cxx_destruct;

@end
