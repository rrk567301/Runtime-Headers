@class NSArray, NSString, SiriRemoteTimerTarget, SiriDevice, NSNumber;

@interface SearchTimerIntent : INIntent

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *allAvailableTargets;
@property (nonatomic, retain) SiriDevice *associatedDeviceTarget;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (nonatomic, retain) SiriRemoteTimerTarget *targetingInfo;
@property (nonatomic, retain) NSNumber *includeRemoteTimers;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
