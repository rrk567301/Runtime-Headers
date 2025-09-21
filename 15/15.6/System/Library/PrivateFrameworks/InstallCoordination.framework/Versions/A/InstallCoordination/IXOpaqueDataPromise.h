@interface IXOpaqueDataPromise : IXDataPromise <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)seedClass;

@end
