@class CNPair;

@interface CNEither : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CNPair *pair;
@property (readonly, nonatomic) BOOL isLeft;
@property (readonly, nonatomic) BOOL isRight;
@property (readonly, nonatomic) id left;
@property (readonly, nonatomic) id right;

+ (id)firstLeftInLazyChain:(id)a0;
+ (id)eitherWithRight:(id)a0;
+ (id)eitherWithLeft:(id)a0 right:(id)a1;
+ (id)eitherWithBool:(BOOL)a0 error:(id)a1;
+ (id)eitherWithBlock:(id /* block */)a0;
+ (id)eitherWithLeft:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithLeft:(id)a0 right:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
