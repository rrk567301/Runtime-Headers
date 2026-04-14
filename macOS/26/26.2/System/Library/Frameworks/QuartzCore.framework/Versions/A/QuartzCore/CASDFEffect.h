@interface CASDFEffect : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;
+ (void)CAMLParserStartElement:(id)a0;
+ (id)defaultValues;
+ (id)allEffectsClasses;

- (void)encodeWithCAMLWriter:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)valueForKey:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)init;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
