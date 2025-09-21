@interface SLSAsynchronousBridgedWindowManagementOperation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)invokeFallback;
- (void)performWithWMBridgeDelegate;

@end
