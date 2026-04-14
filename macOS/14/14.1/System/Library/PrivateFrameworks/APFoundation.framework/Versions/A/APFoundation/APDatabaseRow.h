@class NSNumber, NSString, NSDictionary;

@interface APDatabaseRow : NSObject <APDataObject> {
    NSDictionary *_columns;
    NSDictionary *_readOnlyColumnsDic;
}

@property (nonatomic) BOOL isNewObject;
@property (readonly, nonatomic) NSNumber *rowid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectAll;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)save;
- (id)valueForColumnName:(id)a0;
- (void)setValue:(id)a0 forColumnName:(id)a1;
- (id)initAsNewObject;
- (void)_createColumns;
- (void)addReadOnlyColumnName:(id)a0;
- (BOOL)deleteFromDB;
- (BOOL)isDataObjectEqual:(id)a0;
- (long long)typeForColumnName:(id)a0;

@end
