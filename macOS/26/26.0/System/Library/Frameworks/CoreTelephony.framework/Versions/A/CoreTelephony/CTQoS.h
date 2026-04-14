@class NSNumber, NSArray;

@interface CTQoS : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *qci;
@property (retain, nonatomic) NSNumber *bitRateMax;
@property (retain, nonatomic) NSNumber *bitRateMin;
@property (retain, nonatomic) NSArray *filters;
@property (readonly, nonatomic) NSNumber *gbr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
