@class NSString, NSArray, NSDate;

@interface ULLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *contextLayer;
@property (nonatomic) unsigned long long deviceClass;
@property (nonatomic) void /* unknown type, empty encoding */ coordinates;
@property (retain, nonatomic) NSArray *probabilityVector;
@property (retain, nonatomic) NSArray *imageIdentifiersVector;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)contextLayerEnum;
- (id)copyWithReplacementContextLayerFromServiceIdentifier:(id)a0;
- (id)initWithName:(id)a0 andContextLayerType:(id)a1;
- (id)initWithName:(id)a0 contextLayerType:(id)a1 andDeviceClass:(unsigned long long)a2;
- (id)initWithName:(SEL)a0 timestamp:(id)a1 contextLayer:(id)a2 deviceClass:(id)a3 coordinates:(unsigned long long)a4 probabilityVector:(id)a5 imageIdentifiersVector:(id)a6;
- (void)setCoordinatesForTesting:(SEL)a0;

@end
