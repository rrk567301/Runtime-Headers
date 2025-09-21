@class NSString;

@interface WBSHistoryServiceVisit : WBSHistoryServiceObject

@property (readonly, nonatomic) long long itemID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double visitTime;
@property (readonly, nonatomic) char loadSuccessful;
@property (readonly, nonatomic) char httpNonGet;
@property (readonly, nonatomic) char synthesized;
@property (nonatomic) long long redirectSource;
@property (nonatomic) long long redirectDestination;
@property (nonatomic) long long origin;
@property (nonatomic) long long attributes;
@property (nonatomic) int score;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVisit:(id)a0;
- (id)initWithSQLRow:(id)a0;
- (id)_initWithDatabaseID:(long long)a0 serviceVisit:(id)a1;
- (id)visitWithUpdatedID:(long long)a0 updatedItemID:(long long)a1;

@end
