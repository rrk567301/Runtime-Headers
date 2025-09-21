@class NSString, NSDate;

@interface MTTrigger : NSObject <BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSDate *triggerDate;
@property (readonly, nonatomic) char isForSnooze;
@property (readonly, nonatomic) char isForGoToBed;
@property (readonly, nonatomic) char isForAlert;
@property (readonly, nonatomic) char isForNotification;
@property (readonly, nonatomic) char isScheduled;
@property (readonly, nonatomic) char isEvent;
@property (readonly, nonatomic) char isBedtimeRelated;
@property (readonly, nonatomic) char isWakeUpRelated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stringForType:(unsigned long long)a0;
+ (id)triggerWithDate:(id)a0 triggerType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (char)isEqualToTrigger:(id)a0;
- (id)initWithDate:(id)a0 type:(unsigned long long)a1;

@end
