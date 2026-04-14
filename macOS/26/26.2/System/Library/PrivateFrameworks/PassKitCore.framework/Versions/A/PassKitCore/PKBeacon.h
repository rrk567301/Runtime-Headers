@class NSUUID, NSNumber, NSString;

@interface PKBeacon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *proximityUUID;
@property (retain, nonatomic) NSNumber *major;
@property (retain, nonatomic) NSNumber *minor;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *relevantText;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)proximityUUIDAsString;
- (void)setProximityUUIDWithString:(id)a0;

@end
