@class NSString;

@interface CAStateRemoveElement : CAStateElement

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id object;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matches:(id)a0;
- (void)apply:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (char)CAMLTypeSupportedForKey:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)encodeWithCAMLWriter:(id)a0;

@end
