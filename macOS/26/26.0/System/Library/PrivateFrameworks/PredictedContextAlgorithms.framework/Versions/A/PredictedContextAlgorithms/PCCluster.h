@class PCPLocation, NSUUID, NSArray, NSString, NSDate, PCTime, PCClusterMetadata;

@interface PCCluster : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) PCTime *time;
@property (retain, nonatomic) NSArray *subBundleIDs;
@property (retain, nonatomic) NSArray *subSuggestionIDs;
@property (retain, nonatomic) NSArray *subHKObjectIDs;
@property (retain, nonatomic) NSString *placeName;
@property (retain, nonatomic) NSString *poiCategory;
@property (retain, nonatomic) NSString *enclosingArea;
@property (retain, nonatomic) PCPLocation *location;
@property (nonatomic) int placeUserType;
@property (nonatomic) int placeType;
@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (retain, nonatomic) PCClusterMetadata *clusterMetadata;
@property (nonatomic) double timeOfDayCircularStd;
@property (nonatomic) double latLongCircularStd;

+ (id)clusterObjectsFromProtobuf:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)sensitiveDescription;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 creationDate:(id)a1;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 creationDate:(id)a3;
- (id)initWithProtobufEquivalent:(id)a0;
- (void)mapTimePropertiesFromPhenotype:(id)a0 toDictionary:(id)a1;

@end
