@interface SLSBridgedCopyManagedDisplaysOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithStrings:(id)a0;

@end
