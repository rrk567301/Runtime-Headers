@interface CSFAvailability : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long status;
@property (nonatomic) long long unavailabiltyReasons;
@property (readonly, nonatomic) char shouldShowGM;
@property (readonly, nonatomic) char deviceHasEnoughStorage;
@property (readonly, nonatomic) char unableToFetchAvailability;

+ (id)dispatchQueue;
+ (id)_availabilityGivenUnavailabilityReasons:(long long)a0;
+ (void)_currentAvailabilityWithFeatureObject:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_descriptionForUnavailabilityReasons:(long long)a0;
+ (void)_handleFeatureResponseWithFeatureObject:(id)a0 error:(id)a1 reasons:(long long)a2 shouldBypassEligibility:(char)a3 requestID:(id)a4 completionHandler:(id /* block */)a5;
+ (long long)_syncUnavailabilityReasonsWithRequestID:(id)a0;
+ (id)currentAvailability;
+ (void)currentAvailabilityWithCompletionHandler:(id /* block */)a0;
+ (id)generateRequestID;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 withUnavailabilityReasons:(long long)a1;

@end
