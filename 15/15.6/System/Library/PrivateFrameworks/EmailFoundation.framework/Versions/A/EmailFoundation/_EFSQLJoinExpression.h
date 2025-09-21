@class NSString, EFSQLSelectStatement;
@protocol EFSQLExpressable;

@interface _EFSQLJoinExpression : NSObject <EFSQLExpressable, EFSQLSelectComponent>

@property (readonly, weak, nonatomic) EFSQLSelectStatement *select;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, copy, nonatomic) NSString *tableAlias;
@property (readonly, nonatomic) id<EFSQLExpressable> joinConstraint;
@property (readonly, nonatomic) char isLeftOuter;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSelect:(id)a0 tableName:(id)a1 tableAlias:(id)a2 joinConstraint:(id)a3 isLeftOuter:(char)a4;
- (id)join:(id)a0 sourceColumn:(id)a1 targetColumn:(id)a2;
- (void)addResultColumn:(id)a0;
- (void)addResultColumn:(id)a0 alias:(id)a1;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void)groupByColumn:(id)a0;
- (id)join:(id)a0 alias:(id)a1 on:(id)a2;
- (id)join:(id)a0 alias:(id)a1 sourceColumn:(id)a2 targetColumn:(id)a3;
- (id)join:(id)a0 on:(id)a1;
- (id)leftOuterJoin:(id)a0 alias:(id)a1 on:(id)a2;
- (id)leftOuterJoin:(id)a0 alias:(id)a1 sourceColumn:(id)a2 targetColumn:(id)a3;
- (id)leftOuterJoin:(id)a0 on:(id)a1;
- (id)leftOuterJoin:(id)a0 sourceColumn:(id)a1 targetColumn:(id)a2;
- (void)orderByColumn:(id)a0 ascending:(char)a1;

@end
