@class CTLazuliMessageID;

@interface CTLazuliMessageDispositionNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deliveryType;
@property (retain, nonatomic) CTLazuliMessageID *messageID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageDispositionNotification:(id)a0;

@end
