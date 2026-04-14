@interface HKSummarySharingSyncRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL push;
@property (readonly) BOOL pull;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPush:(BOOL)a0 pull:(BOOL)a1;
- (id)mergeWithRequest:(id)a0;

@end
