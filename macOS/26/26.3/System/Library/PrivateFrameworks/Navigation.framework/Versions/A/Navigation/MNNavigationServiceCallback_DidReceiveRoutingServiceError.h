@class NSError;

@interface MNNavigationServiceCallback_DidReceiveRoutingServiceError : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
