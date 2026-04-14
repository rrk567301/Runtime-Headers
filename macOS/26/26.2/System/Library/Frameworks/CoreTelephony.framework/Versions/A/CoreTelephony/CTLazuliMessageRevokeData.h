@class CTLazuliMessageID, CTLazuliDestination;

@interface CTLazuliMessageRevokeData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliDestination *destination;
@property (retain, nonatomic) CTLazuliMessageID *messageID;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageRevokeData:(id)a0;

@end
