@interface CASDFEffect : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultValues;
+ (void)CAMLParserStartElement:(id)a0;
+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;
+ (id)allEffectsClasses;

- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
