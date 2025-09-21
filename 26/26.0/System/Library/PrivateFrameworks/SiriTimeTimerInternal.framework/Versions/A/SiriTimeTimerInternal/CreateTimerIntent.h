@class NSNumber, NSArray, SiriRemoteTimerTarget, SiriDevice, INSpeakableString;

@interface CreateTimerIntent : INIntent

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *allAvailableTargets;
@property (nonatomic, retain) SiriDevice *associatedDeviceTarget;
@property (nonatomic, retain) INSpeakableString *label;
@property (nonatomic, retain) NSNumber *durationNumber;
@property (nonatomic) long long type;
@property (nonatomic, retain) SiriRemoteTimerTarget *targetingInfo;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
