@class NSArray, NSSet, NSDate;

@interface SPFinderStateInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char state;
@property (nonatomic) char optInScreenOffScan;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSDate *lastPublishDate;
@property (copy, nonatomic) NSDate *lastScheduledPublishActivityDate;
@property (nonatomic) long long activeCache;
@property (retain, nonatomic) NSArray *disabledReasonsArray;
@property (readonly, copy, nonatomic) NSSet *disabledReasons;

+ (char)canPublishAnonymously;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(char)a0 optInScreenOffScan:(char)a1 lastUpdated:(id)a2 lastPublishDate:(id)a3 lastScheduledPublishActivityDate:(id)a4 activeCache:(long long)a5 disabledReasons:(id)a6;

@end
