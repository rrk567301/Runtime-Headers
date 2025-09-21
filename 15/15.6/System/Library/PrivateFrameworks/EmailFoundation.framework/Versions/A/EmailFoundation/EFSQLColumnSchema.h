@class NSString, EFSQLTableSchema, EFSQLColumnExpression;

@interface EFSQLColumnSchema : NSObject {
    EFSQLTableSchema *_table;
}

@property (readonly, nonatomic) unsigned long long collation;
@property (readonly, nonatomic) char isPrimaryKey;
@property (readonly, nonatomic) char isAutoincrementing;
@property (readonly, nonatomic) id defaultValue;
@property (copy, nonatomic) NSString *foreignKeyTargetString;
@property (weak, nonatomic) EFSQLTableSchema *foreignKeyTarget;
@property (nonatomic) unsigned long long foreignKeyDeleteAction;
@property (nonatomic) unsigned long long foreignKeyUpdateAction;
@property (weak, nonatomic) EFSQLTableSchema *associatedTable;
@property (readonly, weak, nonatomic) EFSQLTableSchema *table;
@property (readonly, copy, nonatomic) NSString *definition;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) char nullable;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpression;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpressionWithFullName;

+ (id)integerColumnWithName:(id)a0 nullable:(char)a1;
+ (id)blobColumnWithName:(id)a0 nullable:(char)a1;
+ (unsigned long long)columnTypeForString:(id)a0;
+ (id)integerColumnWithName:(id)a0 nullable:(char)a1 defaultValue:(id)a2;
+ (id)realColumnWithName:(id)a0 nullable:(char)a1;
+ (id)realColumnWithName:(id)a0 nullable:(char)a1 defaultValue:(id)a2;
+ (id)stringForColumnType:(unsigned long long)a0;
+ (id)textColumnWithName:(id)a0 collation:(unsigned long long)a1 nullable:(char)a2;
+ (id)textColumnWithName:(id)a0 collation:(unsigned long long)a1 nullable:(char)a2 defaultValue:(id)a3;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)setTable:(id)a0;
- (id)_stringForForeignKeyAction:(unsigned long long)a0;
- (void)associateWithTable:(id)a0;
- (id)fullNameWithDatabaseName:(id)a0;
- (id)initRowIDWithAlias:(id)a0 isAutoincrementing:(char)a1;
- (id)initWithName:(id)a0 isPrimaryKey:(char)a1 isAutoincrementing:(char)a2 type:(unsigned long long)a3 collation:(unsigned long long)a4 nullable:(char)a5 defaultValue:(id)a6;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 collation:(unsigned long long)a2 nullable:(char)a3 defaultValue:(id)a4;
- (void)setAsForeignKeyForString:(id)a0 onDelete:(unsigned long long)a1 onUpdate:(unsigned long long)a2;
- (void)setAsForeignKeyForTable:(id)a0 onDelete:(unsigned long long)a1 onUpdate:(unsigned long long)a2;

@end
