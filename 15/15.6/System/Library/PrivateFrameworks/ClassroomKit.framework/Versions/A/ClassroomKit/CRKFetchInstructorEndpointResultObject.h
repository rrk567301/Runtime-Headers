@class NSXPCListenerEndpoint;

@interface CRKFetchInstructorEndpointResultObject : CATTaskResultObject

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
