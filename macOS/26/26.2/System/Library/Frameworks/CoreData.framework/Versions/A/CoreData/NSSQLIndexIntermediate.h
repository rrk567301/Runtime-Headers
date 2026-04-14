@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex *_index;
    BOOL _isHandlingExpressions;
}

- (id)governingEntity;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)initForIndex:(id)a0 withScope:(id)a1;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;

@end
