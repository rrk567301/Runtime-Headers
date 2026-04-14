@class NSNumber;

@interface CRKIDSMessageOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=shouldFireAndForget) BOOL fireAndForget;
@property (retain, nonatomic) NSNumber *deliveryTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
