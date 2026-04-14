@class NSString;

@interface CAStateRemoveAnimation : CAStateElement

@property (copy, nonatomic) NSString *key;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)keyPath;
- (BOOL)matches:(id)a0;
- (void)apply:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
