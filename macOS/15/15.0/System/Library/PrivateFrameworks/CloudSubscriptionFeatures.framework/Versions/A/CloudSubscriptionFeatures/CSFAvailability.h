@interface CSFAvailability : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (nonatomic) long long unavailabiltyReasons;
@property (readonly, nonatomic) BOOL shouldShowGM;
@property (readonly, nonatomic) BOOL deviceHasEnoughStorage;

+ (id)dispatchQueue;
+ (id)_availabilityGivenUnavailabilityReasons:(long long)a0;
+ (id)_descriptionForUnavailabilityReasons:(long long)a0;
+ (long long)_syncUnavailabilityReasons;
+ (id)currentAvailability;
+ (void)currentAvailabilityWithCompletionHandler:(id /* block */)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 withUnavailabilityReasons:(long long)a1;

@end
