@class NSError;

@interface MNNavigationServiceCallback_DidReceiveRoutingServiceError : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) NSError *error;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
