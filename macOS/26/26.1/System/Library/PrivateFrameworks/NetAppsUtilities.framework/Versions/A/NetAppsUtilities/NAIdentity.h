@class NSArray;

@interface NAIdentity : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *characteristics;

+ (id)na_identity;

- (id)initWithCharacteristics:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)hashOfObject:(id)a0;
- (BOOL)isObject:(id)a0 equalToObject:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
