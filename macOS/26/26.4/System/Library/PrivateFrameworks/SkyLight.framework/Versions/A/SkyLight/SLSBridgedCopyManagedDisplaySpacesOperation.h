@interface SLSBridgedCopyManagedDisplaySpacesOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithPropertyListArray:(id)a0;

@end
