@class CTQoS;

@interface CTCellularQoSFlow : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long flowId;
@property (retain, nonatomic) CTQoS *txQos;
@property (retain, nonatomic) CTQoS *rxQos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
