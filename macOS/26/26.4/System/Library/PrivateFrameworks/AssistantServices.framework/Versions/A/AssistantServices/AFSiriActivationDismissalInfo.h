@class NSUUID, AFSiriAvailability;

@interface AFSiriActivationDismissalInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *dismissedActivationId;
@property (readonly, nonatomic) AFSiriAvailability *availability;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDismissedActivationId:(id)a0 availability:(id)a1;

@end
