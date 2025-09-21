@class NSString, NSDateInterval, NSDate, HKSPPersistentStateMachine;

@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPPersistentStateMachineEventHandler, HKSPDictionarySerializable, NSCoding, NSCopying>

@property (readonly, nonatomic) HKSPPersistentStateMachine *stateMachine;
@property (retain, nonatomic) NSDateInterval *lifetimeInterval;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double expirationDuration;
@property (readonly, nonatomic) char schedulesExpiration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_hasExpirationDate:(id)a0;
+ (char)_isExpired:(id)a0 currentDate:(id)a1;
+ (id)infiniteInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isExpired;
- (id)succinctDescriptionBuilder;
- (void)_updateState;
- (id)initWithStateMachine:(id)a0;
- (void)_didEnter;
- (void)_didExit;
- (void)_expireOrRescheduleExpirationIfNecessary;
- (void)_resetLifetimeInterval;
- (char)_updateExpirationDate;
- (id)_updatedLifetimeIntervalWithStartDate:(id)a0;
- (char)_willEnter;
- (void)_willExit;
- (id)equalsBuilderWithObject:(id)a0;
- (void)stateDidExpire;
- (void)stateWithIdentifierDidExpire:(id)a0;

@end
