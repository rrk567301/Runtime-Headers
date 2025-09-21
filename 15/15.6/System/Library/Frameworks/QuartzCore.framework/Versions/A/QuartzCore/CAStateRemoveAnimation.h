@class NSString;

@interface CAStateRemoveAnimation : CAStateElement

@property (copy, nonatomic) NSString *key;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)keyPath;
- (char)matches:(id)a0;
- (void)apply:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;

@end
