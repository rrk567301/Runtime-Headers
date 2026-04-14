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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sensitiveDescription;
- (void)encodeWithCoder:(id)a0;

@end
