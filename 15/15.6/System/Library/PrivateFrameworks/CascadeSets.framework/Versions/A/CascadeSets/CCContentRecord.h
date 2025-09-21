@class NSNumber, NSData, NSString;

@interface CCContentRecord : NSObject <CCDatabaseRecord>

@property (readonly, nonatomic) NSNumber *contentHash;
@property (readonly, nonatomic) NSData *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (char)isEqualToItemRecord:(id)a0;

@end
