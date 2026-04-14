@class NSTimeZone, NSUUID, NSString, PCEventVisit, NSDate, PCEventWorkout;

@interface PCEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *eventIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) unsigned long long provider;
@property (readonly, nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *identifierFromProvider;
@property (nonatomic) BOOL fromFirstParty;
@property (retain, nonatomic) PCEventVisit *routineEvent;
@property (retain, nonatomic) PCEventWorkout *workoutEvent;

+ (id)describeCategory:(unsigned long long)a0;
+ (id)formatDate:(id)a0;
+ (id)describeProvider:(unsigned long long)a0;
+ (id)standardDateFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (double)duration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)describeCategory;
- (id)describeProvider;
- (void)initSubEvent;
- (id)initWithEventIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 creationDate:(id)a3 provider:(unsigned long long)a4 category:(unsigned long long)a5;

@end
