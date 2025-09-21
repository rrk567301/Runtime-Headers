@class NSString;

@interface CAStateSetValue : CAStateElement {
    id _value;
}

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id value;

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
- (void)encodeWithCAMLWriter:(id)a0;
- (void)foreachLayer:(id /* block */)a0;

@end
