@class NSXPCListenerEndpoint;

@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;

@end
