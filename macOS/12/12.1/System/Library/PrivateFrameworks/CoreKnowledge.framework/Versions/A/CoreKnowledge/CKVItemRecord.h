@class NSUUID, NSString, NSData, CKVItem, NSNumber;

@interface CKVItemRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) NSNumber *itemIdHash;
@property (readonly, nonatomic) NSUUID *recordId;
@property (readonly, nonatomic) CKVItem *item;
@property (readonly, nonatomic) NSData *itemBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)recordFromDatabaseValueRow:(id)a0;
+ (id)genSQLCreateTable;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToItemRecord:(id)a0;

@end
