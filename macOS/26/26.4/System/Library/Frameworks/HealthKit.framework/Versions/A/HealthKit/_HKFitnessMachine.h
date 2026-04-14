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
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_setDevice:(id)a0;
- (void)_setBrand:(id)a0;
- (void)_setActivityType:(unsigned long long)a0;

@end
