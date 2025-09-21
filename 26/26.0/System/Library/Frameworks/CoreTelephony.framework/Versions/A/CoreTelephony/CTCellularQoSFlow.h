@class NSNumber, CTQoS;

@interface CTCellularQoSFlow : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long flowId;
@property (nonatomic) unsigned long long bearerId;
@property (retain, nonatomic) NSNumber *queueSetId;
@property (retain, nonatomic) NSNumber *is5G;
@property (retain, nonatomic) CTQoS *txQos;
@property (retain, nonatomic) CTQoS *rxQos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
