@class NSArray, SiriTimer, SiriDevice, SiriRemoteTimerTarget;

@interface ResetTimerIntent : INIntent

@property (nonatomic, copy) NSArray *allAvailableTargets;
@property (nonatomic, retain) SiriDevice *associatedDeviceTarget;
@property (nonatomic, retain) SiriTimer *targetTimer;
@property (nonatomic, retain) SiriTimer *toTimer;
@property (nonatomic, retain) SiriRemoteTimerTarget *targetingInfo;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
