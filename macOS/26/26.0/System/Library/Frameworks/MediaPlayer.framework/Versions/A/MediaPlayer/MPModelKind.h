@class NSString;

@interface MPModelKind : NSObject <MSVJSONConvertible, NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly, nonatomic) MPModelKind *identityKind;
@property (class, readonly, nonatomic) MPModelKind *unknownKind;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isPlaylistableKind;
@property (readonly, nonatomic) Class modelClass;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic) MPModelKind *identityKind;

+ (id)_kindWithModelClass:(Class)a0 cacheKey:(id)a1 block:(id /* block */)a2;
+ (id)kindWithModelClass:(Class)a0;
+ (id)kindWithModelClass:(Class)a0 cacheKey:(id)a1 block:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;
- (id)_initWithModelClass:(Class)a0;

@end
