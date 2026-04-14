@interface Navigation.MNTraceSelectStatementBuilder : NSObject {
    void /* unknown type, empty encoding */ _trace;
    void /* unknown type, empty encoding */ _tableName;
    void /* unknown type, empty encoding */ _columns;
}

- (id)init;
- (void).cxx_destruct;
- (void)addColumns:(id)a0;
- (void)addColumn:(id)a0;
- (id)selectStatement;
- (id)initWithTrace:(id)a0 tableName:(id)a1;
- (id)selectStatementWithError:(id *)a0;

@end
