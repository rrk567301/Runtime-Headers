@class NSString, NSMutableDictionary, NSURL, NSDate, EKAlarm;

@interface CalAlarm : NSObject <NSCopying>

@property (retain, nonatomic) EKAlarm *ekAlarm;
@property (retain, nonatomic) NSString *relatedToString;
@property (retain, nonatomic) NSMutableDictionary *unsavedRelateToDictionary;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *sound;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) double relativeTrigger;
@property (copy, nonatomic) NSDate *absoluteTrigger;

+ (id)alarm;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEKAlarm:(id)a0;
- (void)setAcknowledged:(id)a0;
- (id)acknowledged;
- (void)setRelatedTo:(id)a0;
- (id)relatedTo;
- (id)triggerDateRelativeTo:(id)a0;

@end
