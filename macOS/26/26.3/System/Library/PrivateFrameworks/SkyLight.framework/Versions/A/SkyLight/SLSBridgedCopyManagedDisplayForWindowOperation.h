@interface SLSBridgedCopyManagedDisplayForWindowOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned int windowID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWindowID:(unsigned int)a0;
- (id)invokeFallback;
- (id)makeResultWithString:(id)a0;

@end
