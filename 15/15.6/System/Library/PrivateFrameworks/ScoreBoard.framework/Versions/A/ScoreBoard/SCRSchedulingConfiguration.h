@class NSString, NSDate;

@interface SCRSchedulingConfiguration : NSObject <NSMutableCopying, BSDescriptionProviding>

@property (readonly, nonatomic) NSDate *latestStartDate;
@property (readonly, nonatomic, getter=isImmediate) char immediate;
@property (readonly, copy, nonatomic) NSDate *earliestStartDate;
@property (readonly, nonatomic) double schedulingWindow;
@property (readonly, nonatomic) char wakeDeviceForDeadline;
@property (readonly, nonatomic) char requiresClassAAccess;
@property (readonly, nonatomic) char requiresNetworkAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithEarliestStart:(id)a0 schedulingWindow:(double)a1;
+ (id)immediateConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setEarliestStartDate:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)setRequiresNetworkAccess:(char)a0;
- (id)_copyWithClass:(Class)a0;
- (id)intersectionWith:(id)a0 minimumWindow:(double)a1;
- (id)_earliestEffectiveStartDate;
- (id)_initWithStartDate:(id)a0 window:(double)a1;
- (char)_isSatisfiedBy:(id)a0 strictly:(char)a1;
- (id)_latestEffectiveStartDate;
- (char)isCurrentlySatisfiedBy:(id)a0;
- (char)isSatisfiedBy:(id)a0;
- (void)setRequiresClassAAccess:(char)a0;
- (void)setSchedulingWindow:(double)a0;
- (void)setWakeDeviceForDeadline:(char)a0;

@end
