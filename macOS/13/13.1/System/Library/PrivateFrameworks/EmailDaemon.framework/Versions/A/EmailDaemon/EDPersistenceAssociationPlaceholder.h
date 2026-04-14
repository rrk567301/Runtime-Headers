@class NSString, EFSQLColumnSchema;

@interface EDPersistenceAssociationPlaceholder : NSObject

@property (readonly, nonatomic) EFSQLColumnSchema *column;
@property (readonly, copy, nonatomic) NSString *tableName;

- (id)description;
- (void).cxx_destruct;
- (BOOL)resolveWithSchema:(id)a0;
- (id)initWithColumn:(id)a0 tableName:(id)a1;

@end
