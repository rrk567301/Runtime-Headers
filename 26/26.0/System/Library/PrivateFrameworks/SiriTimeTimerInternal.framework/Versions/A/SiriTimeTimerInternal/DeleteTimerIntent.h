@class NSArray, SiriTimer, SiriDevice, SiriRemoteTimerTarget;

@interface DeleteTimerIntent : INIntent

@property (nonatomic, copy) NSArray *allAvailableTargets;
@property (nonatomic, retain) SiriDevice *associatedDeviceTarget;
@property (nonatomic, retain) SiriTimer *targetTimer;
@property (nonatomic, retain) SiriRemoteTimerTarget *targetingInfo;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
