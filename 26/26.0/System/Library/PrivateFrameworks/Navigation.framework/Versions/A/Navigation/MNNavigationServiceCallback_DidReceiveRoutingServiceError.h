@class NSError;

@interface MNNavigationServiceCallback_DidReceiveRoutingServiceError : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
