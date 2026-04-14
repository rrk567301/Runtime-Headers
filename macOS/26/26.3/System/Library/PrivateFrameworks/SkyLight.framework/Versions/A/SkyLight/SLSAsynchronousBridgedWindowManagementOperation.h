@interface SLSAsynchronousBridgedWindowManagementOperation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invokeFallback;
- (void)performWithWMBridgeDelegate;

@end
