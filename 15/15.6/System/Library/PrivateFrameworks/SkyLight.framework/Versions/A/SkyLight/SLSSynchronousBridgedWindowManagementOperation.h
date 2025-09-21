@interface SLSSynchronousBridgedWindowManagementOperation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)invokeFallback;
- (id)performWithWMBridgeDelegate;

@end
