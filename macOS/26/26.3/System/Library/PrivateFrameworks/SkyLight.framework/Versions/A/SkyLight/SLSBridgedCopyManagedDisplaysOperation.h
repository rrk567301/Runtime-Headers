@interface SLSBridgedCopyManagedDisplaysOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithStrings:(id)a0;

@end
