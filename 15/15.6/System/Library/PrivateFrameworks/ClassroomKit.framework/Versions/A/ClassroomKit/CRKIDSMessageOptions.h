@class NSNumber;

@interface CRKIDSMessageOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=shouldFireAndForget) char fireAndForget;
@property (retain, nonatomic) NSNumber *deliveryTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
