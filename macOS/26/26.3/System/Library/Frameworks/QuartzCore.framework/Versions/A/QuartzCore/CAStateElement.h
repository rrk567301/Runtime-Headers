@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) CALayer *target;
@property (retain, nonatomic) CAStateElement *source;
@property (readonly, copy, nonatomic) NSString *keyPath;

+ (void)CAMLParserStartElement:(id)a0;

- (id)save;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)foreachLayer:(id /* block */)a0;
- (BOOL)matches:(id)a0;
- (void)apply:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)targetName;
- (void)encodeWithCoder:(id)a0;

@end
