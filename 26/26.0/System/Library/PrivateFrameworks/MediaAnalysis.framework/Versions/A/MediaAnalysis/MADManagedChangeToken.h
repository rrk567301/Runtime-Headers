@class NSData, NSDate;

@interface MADManagedChangeToken : NSManagedObject

@property (nonatomic) long long tokenID;
@property (nonatomic) long long tokenType;
@property (retain, nonatomic) NSData *tokenData;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) int version;

+ (id)fetchRequest;
+ (id)dateColumnName;
+ (BOOL)isMACDPersistEnabled;
+ (BOOL)isMACDReadEnabled;
+ (id)tokenDataColumnName;
+ (id)tokenIDColumnName;
+ (id)tokenTypeColumnName;
+ (id)versionColumnName;

- (id)description;
- (id)_tokenDataInHexFormat:(id)a0;

@end
