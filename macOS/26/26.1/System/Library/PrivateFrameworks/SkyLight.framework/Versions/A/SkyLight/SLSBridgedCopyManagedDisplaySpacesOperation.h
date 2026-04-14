@interface SLSBridgedCopyManagedDisplaySpacesOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)invokeFallback;
- (id)makeResultWithPropertyListArray:(id)a0;

@end
