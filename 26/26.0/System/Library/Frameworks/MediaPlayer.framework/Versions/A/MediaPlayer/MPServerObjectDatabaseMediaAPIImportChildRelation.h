@class NSString, MPIdentifierSet;

@interface MPServerObjectDatabaseMediaAPIImportChildRelation : NSObject

@property (copy, nonatomic) MPIdentifierSet *identifiers;
@property (copy, nonatomic) MPIdentifierSet *parentIdentifiers;
@property (readonly, copy, nonatomic) NSString *type;
@property (nonatomic) NSString *childKey;
@property (nonatomic) long long relativeOrder;

- (void).cxx_destruct;
- (id)initWithItemIdentifiers:(id)a0 type:(id)a1 parentIdentifiers:(id)a2 childKey:(id)a3 relativeOrder:(long long)a4;

@end
