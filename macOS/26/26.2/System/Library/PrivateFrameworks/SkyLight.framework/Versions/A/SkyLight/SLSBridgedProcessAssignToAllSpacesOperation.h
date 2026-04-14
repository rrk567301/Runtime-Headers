@interface SLSBridgedProcessAssignToAllSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) int process;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProcess:(int)a0;
- (void)invokeFallback;

@end
