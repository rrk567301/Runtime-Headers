@class NSString, NSDate;

@interface MADManagedMomentsScheduledAsset : NSManagedObject

@property (copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSDate *requestDate;
@property (nonatomic) long long taskID;

+ (id)fetchRequest;
+ (BOOL)isMACDPersistEnabled;
+ (BOOL)isMACDReadEnabled;
+ (id)localIdentifierColumnName;
+ (id)requestDateColumnName;
+ (id)taskIDColumnName;

- (id)description;

@end
