@class MNLocation;

@interface MNNavigationServiceCallback_DidUpdateMatchedLocation : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNLocation *location;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
