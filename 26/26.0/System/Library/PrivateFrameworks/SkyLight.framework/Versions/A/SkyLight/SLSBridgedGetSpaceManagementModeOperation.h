@interface SLSBridgedGetSpaceManagementModeOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithSpaceManagementMode:(unsigned long long)a0;

@end
