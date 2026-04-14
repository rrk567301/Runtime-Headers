@class NSArray;

@interface SPSecureLocationsSubscriptionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) double expiresIn;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithExpiryTime:(double)a0 locations:(id)a1;

@end
