@class NSArray, NSString, NSPredicate, NSDate;

@interface WiFiUsageLQMTriggerCriteria : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *dataTriggeredTypes;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSPredicate *requiredFieldsValid;
@property (retain, nonatomic) NSString *filterCriteria;
@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL matched;
@property (retain, nonatomic) NSDate *firstTriggered;
@property (retain, nonatomic) NSDate *lastTriggered;
@property (retain, nonatomic) NSDate *currentSample;
@property (retain, nonatomic) NSString *bssid;

+ (id)parseCriteria:(id)a0 intoRequiredFields:(id)a1 andFeatures:(id)a2 forFields:(id)a3 withType:(id)a4 isFilter:(BOOL)a5;
+ (void)initialize;
+ (id)predicateNoQuotes:(id)a0;

- (id)typeAsString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortPredicate;
- (id)description;
- (id)initWith:(id)a0 forFields:(id)a1 andFeatures:(id)a2;
- (id)shortPredicateNoSpaces;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
