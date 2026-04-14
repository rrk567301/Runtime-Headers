@class NSNumber, NSString;

@interface CTGeofenceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *radius;
@property (retain, nonatomic) NSString *geofenceId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
