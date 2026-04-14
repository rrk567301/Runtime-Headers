@class CTLazuliMessageID, CTLazuliDestination;

@interface CTLazuliMessageEnvelope : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) CTLazuliDestination *from;
@property (retain, nonatomic) CTLazuliMessageID *messageID;
@property (nonatomic) BOOL secure;
@property (retain, nonatomic) id content;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageEnvelope:(id)a0;

@end
