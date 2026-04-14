@interface CASDFEffect : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultValueForKey:(id)a0;
+ (id)defaultValues;
+ (id)CA_attributes;
+ (void)CAMLParserStartElement:(id)a0;
+ (id)allEffectsClasses;

- (id)valueForKeyPath:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)init;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
