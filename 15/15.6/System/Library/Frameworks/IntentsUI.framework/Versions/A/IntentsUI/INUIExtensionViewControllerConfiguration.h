@class NSSet;

@interface INUIExtensionViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *parameters;
@property (readonly, nonatomic) unsigned long long interactiveBehavior;
@property (readonly, nonatomic) unsigned long long hostedViewContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameters:(id)a0 interactiveBehavior:(unsigned long long)a1 hostedViewContext:(unsigned long long)a2;

@end
