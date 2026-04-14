@interface SLSBridgedWindowManagementOperationWindowIDResult : SLSBridgedWindowManagementOperationResult

@property (readonly) unsigned int windowID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWindowID:(unsigned int)a0;

@end
