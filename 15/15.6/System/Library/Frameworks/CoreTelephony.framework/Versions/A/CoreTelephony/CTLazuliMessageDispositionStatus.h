@class CTLazuliDestination, CTLazuliGroupChatUri, CTLazuliMessageID;

@interface CTLazuliMessageDispositionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long deliveryType;
@property (retain, nonatomic) CTLazuliMessageID *forMessageID;
@property (retain, nonatomic) CTLazuliDestination *from;
@property (retain, nonatomic) CTLazuliGroupChatUri *forGroupChat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliMessageDispositionStatus:(id)a0;

@end
