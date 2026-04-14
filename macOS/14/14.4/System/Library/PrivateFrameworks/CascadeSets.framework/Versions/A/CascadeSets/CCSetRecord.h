@class NSNumber, NSString;

@interface CCSetRecord : NSObject <CCDatabaseRecord>

@property (readonly, nonatomic) NSNumber *setRowId;
@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) NSString *encodedDescriptors;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSNumber *validityHash;
@property (readonly, nonatomic) NSNumber *modified;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)_optionsDescription:(unsigned long long)a0;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToSetRecord:(id)a0;

@end
