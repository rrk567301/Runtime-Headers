@interface FCPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    id mFirst;
    id mSecond;
}

+ (id)pair;
+ (id)pairWithFirst:(id)a0 second:(id)a1;
+ (id)pairWithPair:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)first;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)p_SetFirst:(id)a0;
- (id)init;
- (id)initWithPair:(id)a0;
- (id)second;
- (id)description;
- (void)p_SetSecond:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
