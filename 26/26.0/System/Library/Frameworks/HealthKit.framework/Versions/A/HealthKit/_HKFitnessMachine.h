@class NSUUID, HKDevice, NSString;

@interface _HKFitnessMachine : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) HKDevice *device;
@property (readonly, nonatomic) NSString *brand;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_setDevice:(id)a0;
- (void)_setBrand:(id)a0;
- (void)_setActivityType:(unsigned long long)a0;

@end
