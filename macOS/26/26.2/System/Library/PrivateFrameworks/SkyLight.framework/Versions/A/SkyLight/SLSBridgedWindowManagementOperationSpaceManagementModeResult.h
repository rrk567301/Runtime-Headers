@interface SLSBridgedWindowManagementOperationSpaceManagementModeResult : SLSBridgedWindowManagementOperationResult

@property (readonly) unsigned long long spaceManagementMode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSpaceManagementMode:(unsigned long long)a0;

@end
