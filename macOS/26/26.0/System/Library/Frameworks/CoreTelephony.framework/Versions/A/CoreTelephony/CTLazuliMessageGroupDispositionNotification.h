@class CTLazuliGroupChatInformation, CTLazuliMessageID;

@interface CTLazuliMessageGroupDispositionNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deliveryType;
@property (retain, nonatomic) CTLazuliMessageID *messageID;
@property (retain, nonatomic) CTLazuliGroupChatInformation *chatInformation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageGroupDispositionNotification:(id)a0;

@end
