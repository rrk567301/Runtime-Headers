@class NSArray, NSString, NSPredicate, NSDate;

@interface WiFiUsageLQMTriggerCriteria : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *dataTriggeredTypes;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSPredicate *requiredFieldsValid;
@property (retain, nonatomic) NSString *filterCriteria;
@property (nonatomic) char valid;
@property (nonatomic) char matched;
@property (retain, nonatomic) NSDate *firstTriggered;
@property (retain, nonatomic) NSDate *lastTriggered;
@property (retain, nonatomic) NSDate *currentSample;
@property (retain, nonatomic) NSString *bssid;

+ (void)initialize;
+ (id)parseCriteria:(id)a0 intoRequiredFields:(id)a1 andFeatures:(id)a2 forFields:(id)a3 withType:(id)a4 isFilter:(char)a5;
+ (id)predicateNoQuotes:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWith:(id)a0 forFields:(id)a1 andFeatures:(id)a2;
- (id)shortPredicate;
- (id)shortPredicateNoSpaces;
- (id)typeAsString;

@end
