@interface CTPNRSupportStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long supportType;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=isDisallowedByMDM) BOOL disallowedByMDM;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSupportType:(long long)a0;
- (BOOL)isEqualToCTPNRSupportStatus:(id)a0;

@end
