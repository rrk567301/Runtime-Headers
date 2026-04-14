@class NSString, _BKSHIDEventDeferringRuleIdentity, NSSet, BKSHIDEventDeferringTarget, BKSHIDEventDeferringPredicate;

@interface BKSHIDEventDeferringRule : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDeferringPredicate *predicate;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringTarget *target;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) _BKSHIDEventDeferringRuleIdentity *identity;
@property (readonly, copy, nonatomic) NSSet *restrictedToEventDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleForDeferringEventsMatchingPredicate:(id)a0 restrictedToEventDescriptors:(id)a1 toTarget:(id)a2 withReason:(id)a3 seed:(unsigned int)a4 pid:(int)a5;
+ (id)ruleForDeferringEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2 seed:(unsigned int)a3 pid:(int)a4;

- (long long)mostRecentFirstCompare:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithPredicate:(id)a0 restrictedToEventDescriptors:(id)a1 target:(id)a2 reason:(id)a3 identity:(id)a4;
- (long long)weightedDeferringRuleCompare:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)eventDescriptorIsRestricted:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
