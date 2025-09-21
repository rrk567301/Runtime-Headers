@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) CALayer *target;
@property (retain, nonatomic) CAStateElement *source;
@property (readonly, copy, nonatomic) NSString *keyPath;

+ (void)CAMLParserStartElement:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matches:(id)a0;
- (id)save;
- (void)apply:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (char)CAMLTypeSupportedForKey:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)foreachLayer:(id /* block */)a0;
- (id)targetName;

@end
