@class CTLazuliMessageID;

@interface CTLazuliMessageDispositionNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long deliveryType;
@property (retain, nonatomic) CTLazuliMessageID *messageID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliMessageDispositionNotification:(id)a0;

@end
