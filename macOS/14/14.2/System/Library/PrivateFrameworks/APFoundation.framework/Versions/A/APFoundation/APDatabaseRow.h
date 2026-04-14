@class NSDictionary, NSNumber, NSString;
@protocol APDatabaseTableProtocol;

@interface APDatabaseRow : NSObject <APDatabaseRowProtocol> {
    id<APDatabaseTableProtocol> _table;
}

@property (retain, nonatomic) NSDictionary *columns;
@property (retain, nonatomic) NSDictionary *readOnlyColumnsDic;
@property (nonatomic) BOOL isNewObject;
@property (readonly, nonatomic) NSNumber *rowid;
@property (readonly, weak, nonatomic) id<APDatabaseTableProtocol> table;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)save;
- (id)initWithTable:(id)a0;
- (id)valueForColumnName:(id)a0;
- (void)setValue:(id)a0 forColumnName:(id)a1;
- (void)_createColumns;
- (void)addReadOnlyColumnName:(id)a0;
- (BOOL)deleteFromDB;
- (id)initAsNewObjectWithTable:(id)a0;
- (BOOL)isDataObjectEqual:(id)a0;
- (long long)typeForColumnName:(id)a0;

@end
