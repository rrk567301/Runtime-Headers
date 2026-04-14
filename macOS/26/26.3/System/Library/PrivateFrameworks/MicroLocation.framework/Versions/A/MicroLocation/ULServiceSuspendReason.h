@interface ULServiceSuspendReason : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long suspendReasonEnum;

+ (id)new;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSuspendReasonEnum:(unsigned long long)a0;

@end
