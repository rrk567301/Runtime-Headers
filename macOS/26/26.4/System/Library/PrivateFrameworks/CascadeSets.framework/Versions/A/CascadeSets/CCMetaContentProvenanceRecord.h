@class NSNumber, NSString;

@interface CCMetaContentProvenanceRecord : NSObject <CCProvenanceRecord>

@property (readonly, nonatomic) NSNumber *deviceRowId;
@property (readonly, nonatomic) NSNumber *sourceItemIdHash;
@property (readonly, nonatomic) NSNumber *instanceHash;
@property (readonly, nonatomic) NSNumber *contentHash;
@property (readonly, nonatomic) NSNumber *sequenceNumber;
@property (readonly, nonatomic) NSNumber *deletedRunLength;
@property (readonly, nonatomic) NSNumber *writtenDate;
@property (readonly, nonatomic) NSNumber *deletedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToRecord:(id)a0;
- (id)initWithDatabaseValueRow:(id)a0;

@end
