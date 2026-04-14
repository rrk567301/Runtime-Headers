@class NSString, NSUUID;

@interface SEMFTSRecord : NSObject <SEMDatabaseRecord>

@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) NSString *fieldValue;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSUUID *recordId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;
+ (id)encodedRecordIdString:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (id)initWithFieldType:(long long)a0 fieldValue:(id)a1 originAppId:(id)a2 itemType:(long long)a3 recordId:(id)a4;
- (BOOL)isEqualToFTSRecord:(id)a0;

@end
