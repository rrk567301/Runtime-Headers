@class ULCoordinate, NSString, NSArray, NSDate;

@interface ULLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *contextLayer;
@property (nonatomic) unsigned long long deviceClass;
@property (retain, nonatomic) ULCoordinate *coordinate;
@property (retain, nonatomic) NSArray *probabilityVector;
@property (retain, nonatomic) NSArray *imageIdentifiersVector;

- (float)yaw;
- (void /* unknown type, empty encoding */)coordinates;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 andContextLayerType:(id)a1;
- (unsigned long long)contextLayerEnum;
- (id)copyWithReplacementContextLayerFromServiceIdentifier:(id)a0;
- (id)initWithName:(id)a0 contextLayerType:(id)a1 andDeviceClass:(unsigned long long)a2;
- (id)initWithName:(id)a0 timestamp:(id)a1 contextLayer:(id)a2 deviceClass:(unsigned long long)a3 coordinate:(id)a4 probabilityVector:(id)a5 imageIdentifiersVector:(id)a6;
- (id)initWithName:(id)a0 timestamp:(id)a1 contextLayerType:(id)a2 deviceClass:(unsigned long long)a3;
- (void)setCoordinateForTesting:(id)a0;

@end
