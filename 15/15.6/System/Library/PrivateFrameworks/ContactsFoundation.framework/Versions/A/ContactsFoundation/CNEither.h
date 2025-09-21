@class CNPair;

@interface CNEither : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CNPair *pair;
@property (readonly, nonatomic) char isLeft;
@property (readonly, nonatomic) char isRight;
@property (readonly, nonatomic) id left;
@property (readonly, nonatomic) id right;

+ (id)eitherWithLeft:(id)a0;
+ (id)eitherWithBlock:(id /* block */)a0;
+ (id)eitherWithBool:(char)a0 error:(id)a1;
+ (id)eitherWithLeft:(id)a0 right:(id)a1;
+ (id)eitherWithRight:(id)a0;
+ (id)firstLeftInLazyChain:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLeft:(id)a0 right:(id)a1;

@end
