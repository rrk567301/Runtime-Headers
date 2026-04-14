@class NSXPCListenerEndpoint;

@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (BOOL)supportsSecureCoding;

- (id)initWithEndpoint:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
