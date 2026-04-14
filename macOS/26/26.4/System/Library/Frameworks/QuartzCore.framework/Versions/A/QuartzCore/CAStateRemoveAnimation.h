@class NSString;

@interface CAStateRemoveAnimation : CAStateElement

@property (copy, nonatomic) NSString *key;

+ (BOOL)supportsSecureCoding;

- (void)apply:(id)a0;
- (BOOL)matches:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)keyPath;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
