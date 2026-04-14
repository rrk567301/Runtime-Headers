@class NSString, NSURL, NSDate;

@interface CalStoreRemoteManagedAlarm : CalStoreRemoteManagedObject

@property (retain, nonatomic) NSDate *absoluteTrigger;
@property (retain, nonatomic) NSDate *acknowledged;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *emailAddress;
@property (nonatomic) int order;
@property (retain, nonatomic) NSString *sound;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *relatedTo;
@property (nonatomic) double relativeTrigger;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)triggerDateRelativeTo:(id)a0;
- (long long)compareAlarmOrder:(id)a0;

@end
