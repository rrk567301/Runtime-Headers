@class NSArray;

@interface NAIdentity : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *characteristics;

+ (id)na_identity;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCharacteristics:(id)a0;
- (unsigned long long)hashOfObject:(id)a0;
- (BOOL)isObject:(id)a0 equalToObject:(id)a1;

@end
