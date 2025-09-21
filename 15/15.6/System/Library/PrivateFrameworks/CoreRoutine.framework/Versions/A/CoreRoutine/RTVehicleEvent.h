@class RTLocationOfInterest, NSString, RTLocation, NSUUID, NSDate, NSData, RTMapItem;

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) RTLocation *location;
@property (copy, nonatomic) NSString *vehicleIdentifier;
@property (nonatomic) char userSetLocation;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *photo;
@property (retain, nonatomic) RTMapItem *mapItem;
@property (nonatomic) unsigned long long locationQuality;
@property (nonatomic) char usualLocation;
@property (copy, nonatomic) RTLocationOfInterest *nearbyLocationOfInterest;
@property (nonatomic) char confirmed;
@property (nonatomic) char locationFinalized;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (id)initWithDate:(id)a0 location:(id)a1 vehicleIdentifier:(id)a2 userSetLocation:(char)a3 notes:(id)a4 identifier:(id)a5 photo:(id)a6 mapItem:(id)a7 confirmed:(char)a8;

@end
