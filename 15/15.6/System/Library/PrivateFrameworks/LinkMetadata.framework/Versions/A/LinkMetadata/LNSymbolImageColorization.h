@class LNSymbolImageColorSpecification;

@interface LNSymbolImageColorization : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) LNSymbolImageColorSpecification *foreground;
@property (readonly, nonatomic) LNSymbolImageColorSpecification *background;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithForeground:(id)a0 background:(id)a1;

@end
