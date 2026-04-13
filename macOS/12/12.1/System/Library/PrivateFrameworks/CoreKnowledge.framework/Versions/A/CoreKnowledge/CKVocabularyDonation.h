@class NSArray, CKVOriginApp;

@interface CKVocabularyDonation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKVOriginApp *originApp;
@property (readonly, nonatomic) NSArray *serializedItems;
@property (readonly, nonatomic) long long itemType;

+ (id)builderWithOriginApp:(id)a0 itemClass:(Class)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginApp:(id)a0 serializedItems:(id)a1 itemType:(long long)a2;
- (BOOL)isEqualToDonation:(id)a0;

@end
