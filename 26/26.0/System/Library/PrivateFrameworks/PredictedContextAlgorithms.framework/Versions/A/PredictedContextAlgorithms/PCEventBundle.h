@class PCPLocation, NSUUID, NSString, NSArray, NSDate, PCTime;

@interface PCEventBundle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *bundleIdentifier;
@property (retain, nonatomic) NSUUID *suggestionID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *bundleType;
@property (nonatomic) unsigned long long interfaceType;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) PCTime *time;
@property (retain, nonatomic) NSArray *subBundleIDs;
@property (retain, nonatomic) NSArray *subSuggestionIDs;
@property (retain, nonatomic) NSString *placeName;
@property (retain, nonatomic) NSString *poiCategory;
@property (retain, nonatomic) NSString *enclosingArea;
@property (retain, nonatomic) PCPLocation *location;
@property (nonatomic) int placeUserType;
@property (nonatomic) int placeType;
@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) PCPLocation *workoutLocationStart;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (retain, nonatomic) NSUUID *hkObjectIdentifier;
@property (nonatomic) int workoutSessionLocationType;
@property (nonatomic) int workoutSwimmingLocationType;
@property (nonatomic) unsigned long long bundleSubType;
@property (nonatomic) unsigned long long bundleSuperType;
@property (retain, nonatomic) NSDate *firstCreationDate;

+ (id)getInterfaceTypeString:(unsigned long long)a0 superType:(unsigned long long)a1;

- (id)dateInterval;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addEvents:(id)a0;
- (id)localEndDate;
- (void)addEvent:(id)a0;
- (id)description;
- (id)localStartDate;
- (id)sensitiveDescription;
- (id)initWithCoder:(id)a0;
- (double)duration;
- (id)displayStartDate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)displayEndDate;
- (id)getBundleType;
- (unsigned long long)getInterfaceTypeEnum:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 creationDate:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 suggestionID:(id)a1 bundleType:(id)a2 creationDate:(id)a3 firstCreationDate:(id)a4 endDate:(id)a5 events:(id)a6 interfaceType:(unsigned long long)a7 startDate:(id)a8 action:(id)a9 actions:(id)a10 place:(id)a11 time:(id)a12 places:(id)a13 subBundleIDs:(id)a14 subSuggestionIDs:(id)a15 bundleSubType:(unsigned long long)a16 bundleSuperType:(unsigned long long)a17;
- (id)initWithBundleIdentifier:(id)a0 suggestionID:(id)a1 startDate:(id)a2 endDate:(id)a3 creationDate:(id)a4;
- (void)setPropertiesBasedOnEvents;

@end
