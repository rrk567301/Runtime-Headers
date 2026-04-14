@class GEOResumeRouteHandle;

@interface MNNavigationServiceCallback_DidUpdateResumeRouteHandle : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;

+ (BOOL)supportsSecureCoding;
+ (id)didUpdateResumeRouteHandle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
