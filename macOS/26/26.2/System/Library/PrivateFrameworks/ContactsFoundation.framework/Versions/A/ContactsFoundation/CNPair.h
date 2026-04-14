@interface CNPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id first;
@property (readonly) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initNonMemoizedWithFirst:(id)a0 second:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
