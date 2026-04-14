@class NSString, NSDictionary, NSSet, NSNumber, APDatabaseManager;

@interface APDatabaseRow : NSObject <APDatabaseRowProtocol> {
    APDatabaseManager *_manager;
}

@property (retain, nonatomic) NSDictionary *columns;
@property (nonatomic) BOOL isNewObject;
@property (readonly, nonatomic) NSNumber *rowid;
@property (readonly, weak, nonatomic) APDatabaseManager *manager;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSSet *readOnlyColumns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)save;
- (id)valueForColumnName:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithTable:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forColumnName:(id)a1;
- (id)_allowedCodingClasses;
- (void)_createColumns;
- (BOOL)deleteFromDB;
- (id)dictionaryFromBlobForColumnName:(id)a0;
- (id)initAsNewObjectWithTable:(id)a0;
- (BOOL)isDataObjectEqual:(id)a0;
- (void)setDictionary:(id)a0 forBlobColumnName:(id)a1;
- (long long)typeForColumnName:(id)a0;

@end
