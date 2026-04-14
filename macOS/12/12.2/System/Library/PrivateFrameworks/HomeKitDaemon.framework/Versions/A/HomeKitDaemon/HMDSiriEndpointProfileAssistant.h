@class NSString, NSArray, NSNumber, HMDService;
@protocol HMFLocking;

@interface HMDSiriEndpointProfileAssistant : HMFObject <NSSecureCoding> {
    id<HMFLocking> _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *identifier;
@property (copy) NSString *name;
@property (copy) NSNumber *active;
@property (readonly) HMDService *service;
@property (readonly) NSArray *characteristicsToMonitor;
@property (readonly) NSArray *allCharacteristics;

+ (id)shortDescription;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (BOOL)updateCharacteristic:(id)a0 value:(id)a1;
- (id)_identifierCharacteristic;
- (id)_nameCharacteristic;
- (id)_activeCharacteristic;
- (BOOL)containsCharacteristic:(id)a0;

@end
