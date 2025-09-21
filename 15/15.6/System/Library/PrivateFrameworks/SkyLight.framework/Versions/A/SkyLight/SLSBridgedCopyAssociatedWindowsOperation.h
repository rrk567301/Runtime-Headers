@interface SLSBridgedCopyAssociatedWindowsOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned int windowID;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowID:(unsigned int)a0;
- (id)invokeFallback;
- (id)makeResultWithNumbers:(id)a0;

@end
