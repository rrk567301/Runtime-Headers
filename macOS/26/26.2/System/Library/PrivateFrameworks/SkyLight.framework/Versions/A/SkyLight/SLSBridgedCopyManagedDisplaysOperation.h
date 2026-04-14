@interface SLSBridgedCopyManagedDisplaysOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)invokeFallback;
- (id)makeResultWithStrings:(id)a0;

@end
