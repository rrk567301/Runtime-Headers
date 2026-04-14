@interface ULLabelWiFi : ULLabel

@property (nonatomic) long long rssi;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithName:(id)a0 rssi:(long long)a1;
- (id)initWithName:(SEL)a0 rssi:(id)a1 timestamp:(long long)a2 coordinates:(id)a3 probabilityVector:(id)a4 imageIdentifiersVector:(id)a5;

@end
