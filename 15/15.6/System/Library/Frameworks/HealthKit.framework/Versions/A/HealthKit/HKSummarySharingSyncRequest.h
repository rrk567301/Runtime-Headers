@interface HKSummarySharingSyncRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char push;
@property (readonly, nonatomic) char pull;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPush:(char)a0 pull:(char)a1;
- (id)requestByMergingRequest:(id)a0;

@end
