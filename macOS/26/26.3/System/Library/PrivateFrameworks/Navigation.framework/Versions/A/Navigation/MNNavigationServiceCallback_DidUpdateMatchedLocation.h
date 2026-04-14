@class MNLocation;

@interface MNNavigationServiceCallback_DidUpdateMatchedLocation : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNLocation *location;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
