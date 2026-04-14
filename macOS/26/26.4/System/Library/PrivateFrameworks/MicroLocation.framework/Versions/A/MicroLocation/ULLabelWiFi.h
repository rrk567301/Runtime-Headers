@interface ULLabelWiFi : ULLabel

@property (nonatomic) long long rssi;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 rssi:(long long)a1;
- (id)initWithName:(id)a0 rssi:(long long)a1 timestamp:(id)a2 coordinate:(id)a3 probabilityVector:(id)a4 imageIdentifiersVector:(id)a5;
- (id)initWithName:(id)a0 timestamp:(id)a1 rssi:(long long)a2;

@end
