@interface SLSBridgedSetSpaceManagementModeOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long mode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMode:(unsigned long long)a0;
- (void)invokeFallback;

@end
