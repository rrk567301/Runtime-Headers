@interface SLSBridgedProcessAssignToAllSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) int process;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcess:(int)a0;
- (void)invokeFallback;

@end
