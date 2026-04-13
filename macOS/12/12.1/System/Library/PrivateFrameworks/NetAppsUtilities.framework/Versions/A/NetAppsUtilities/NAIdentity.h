@class NSArray;

@interface NAIdentity : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *characteristics;

+ (id)na_identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)hashOfObject:(id)a0;
- (BOOL)isObject:(id)a0 equalToObject:(id)a1;
- (id)initWithCharacteristics:(id)a0;

@end
