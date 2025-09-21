@class NSSet;

@interface INUIInterfaceSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interactiveBehavior;
@property (readonly, copy, nonatomic) NSSet *parameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInteractiveBehavior:(unsigned long long)a0 parameters:(id)a1;

@end
