@class NSString, EFSQLColumnSchema;

@interface EFSQLTableRelationship : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn;
@property (readonly, nonatomic) EFSQLColumnSchema *destinationColumn;
@property (readonly) char useLeftOuterJoin;
@property (readonly, nonatomic) NSString *tableAlias;
@property (readonly) char isProtectedTable;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceColumn:(id)a0 destinationColumn:(id)a1 useLeftOuterJoin:(char)a2;
- (id)initWithSourceColumn:(id)a0 destinationColumn:(id)a1 useLeftOuterJoin:(char)a2 tableAlias:(id)a3 isProtectedTable:(char)a4;

@end
