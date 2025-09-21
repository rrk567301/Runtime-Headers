@interface NIDLTDOAMeasurement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long address;
@property (readonly, nonatomic) long long measurementType;
@property (readonly, nonatomic) double transmitTime;
@property (readonly, nonatomic) double receiveTime;
@property (readonly, nonatomic) double signalStrength;
@property (readonly, nonatomic) double carrierFrequencyOffset;
@property (readonly, nonatomic) long long coordinatesType;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ coordinates;

- (void)setAddress:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setSignalStrength:(double)a0;
- (void)setCoordinates:(SEL)a0;
- (void)setMeasurementType:(long long)a0;
- (void)setReceiveTime:(double)a0;
- (id)initWithAnchorAddress:(SEL)a0 measurementType:(unsigned long long)a1 coordinatesType:(long long)a2 transmitTime:(long long)a3 receiveTime:(double)a4 signalStrength:(double)a5 carrierFrequencyOffset:(double)a6 coordinates:(double)a7;
- (void)setCarrierFrequencyOffset:(double)a0;
- (void)setCoordinatesType:(long long)a0;
- (void)setTransmitTime:(double)a0;

@end
