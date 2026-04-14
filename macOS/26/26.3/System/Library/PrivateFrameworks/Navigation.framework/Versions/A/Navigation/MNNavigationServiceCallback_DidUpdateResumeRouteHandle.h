@class GEOResumeRouteHandle;

@interface MNNavigationServiceCallback_DidUpdateResumeRouteHandle : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;

+ (BOOL)supportsSecureCoding;
+ (id)didUpdateResumeRouteHandle:(id)a0;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
