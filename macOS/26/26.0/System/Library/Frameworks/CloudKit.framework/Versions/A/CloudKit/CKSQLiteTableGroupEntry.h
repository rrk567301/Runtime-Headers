@class NSString, NSDictionary, NSDate, NSNumber;

@interface CKSQLiteTableGroupEntry : NSObject

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSString *creatingClass;
@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDictionary *groupData;
@property (copy, nonatomic) NSNumber *flags;

+ (double)expirationTime;
+ (id)expirationDate;

- (BOOL)isExpired;
- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)clearFlag:(unsigned long long)a0 database:(id)a1;
- (void)deleteTables:(id)a0;
- (BOOL)hasFlag:(unsigned long long)a0 database:(id)a1;
- (id)setFlag:(unsigned long long)a0 database:(id)a1;

@end
