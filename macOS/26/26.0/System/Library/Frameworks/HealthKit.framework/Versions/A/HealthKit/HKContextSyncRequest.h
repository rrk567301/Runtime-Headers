@interface HKContextSyncRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL push;
@property (readonly, nonatomic) BOOL pull;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPush:(BOOL)a0 pull:(BOOL)a1;
- (id)requestByMergingRequest:(id)a0;

@end
