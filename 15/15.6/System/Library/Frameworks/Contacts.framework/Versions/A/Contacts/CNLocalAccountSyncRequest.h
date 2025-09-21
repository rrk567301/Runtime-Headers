@interface CNLocalAccountSyncRequest : CNAccountSyncRequest <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long retryCount;
@property BOOL standby;
@property BOOL resetStandby;
@property BOOL clearify;

+ (id)argumentsForRequest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
