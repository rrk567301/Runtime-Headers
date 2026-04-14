@interface SLSBridgedGetSpaceManagementModeOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)invokeFallback;
- (id)makeResultWithSpaceManagementMode:(unsigned long long)a0;

@end
