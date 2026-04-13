@class NSString;

@interface CAStateRemoveElement : CAStateElement

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id object;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matches:(id)a0;
- (void)apply:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;

@end
