@class NSString, NSDate;

@interface IRNearbyDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double range;
@property (readonly, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) NSString *mediaRemoteIdentifier;
@property (readonly, nonatomic) NSString *proximityType;
@property (readonly, nonatomic) NSDate *measurementDate;

+ (id)miLoNearbyDeviceDOWithRange:(double)a0 idsIdentifier:(id)a1 mediaRemoteIdentifier:(id)a2 proximityType:(id)a3 measurementDate:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementIdsIdentifier:(id)a0;
- (id)copyWithReplacementMeasurementDate:(id)a0;
- (id)copyWithReplacementMediaRemoteIdentifier:(id)a0;
- (id)copyWithReplacementProximityType:(id)a0;
- (id)copyWithReplacementRange:(double)a0;
- (id)exportAsDictionary;
- (id)initWithRange:(double)a0 idsIdentifier:(id)a1 mediaRemoteIdentifier:(id)a2 proximityType:(id)a3 measurementDate:(id)a4;
- (char)isEqualToMiLoNearbyDeviceDO:(id)a0;

@end
