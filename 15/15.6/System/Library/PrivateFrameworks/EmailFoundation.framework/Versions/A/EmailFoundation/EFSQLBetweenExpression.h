@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLValueExpressable>

@property (readonly, nonatomic) id<EFSQLExpressable> left;
@property (readonly, nonatomic) char between;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;

- (void).cxx_destruct;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (id)initWithLeft:(id)a0 firstValue:(id)a1 secondValue:(id)a2 between:(char)a3;
- (void)setColumnExpression:(id)a0;

@end
