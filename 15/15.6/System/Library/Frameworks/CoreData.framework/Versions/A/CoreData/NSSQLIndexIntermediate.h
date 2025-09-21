@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex *_index;
    char _isHandlingExpressions;
}

- (void)dealloc;
- (id)governingEntity;
- (id)generateSQLStringInContext:(id)a0;
- (id)initForIndex:(id)a0 withScope:(id)a1;
- (char)isIndexExpressionScoped;
- (char)isIndexScoped;

@end
