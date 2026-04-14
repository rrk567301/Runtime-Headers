@class NSString, PCPLocation;

@interface PCEventVisit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int placeUserType;
@property (retain, nonatomic) NSString *placeName;
@property (retain, nonatomic) NSString *poiCategory;
@property (nonatomic) unsigned long long placeSource;
@property (nonatomic) int mapItemPlaceType;
@property (retain, nonatomic) PCPLocation *location;
@property (nonatomic) unsigned long long mapItemID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)sensitiveDescription;
- (id)init;

@end
