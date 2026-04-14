@class NSString, RTLocation, RTMapItem, NSUUID;

@interface RTPlaceInference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) RTMapItem *mapItem;
@property (readonly, nonatomic) RTMapItem *finerGranularityMapItem;
@property (readonly, nonatomic) unsigned long long userType;
@property (readonly, nonatomic) unsigned long long userTypeSource;
@property (readonly, nonatomic) unsigned long long placeType;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double finerGranularityMapItemConfidence;
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) NSUUID *loiIdentifier;

+ (unsigned long long)placeInferencePlaceTypeFromMapItem:(id)a0 userType:(unsigned long long)a1 source:(unsigned long long)a2;
+ (id)placeTypeToString:(unsigned long long)a0;
+ (id)userSpecificPlaceTypeSourceToString:(unsigned long long)a0;
+ (id)userSpecificPlaceTypeToString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0 finerGranularityMapItem:(id)a1 userType:(unsigned long long)a2 userTypeSource:(unsigned long long)a3 placeType:(unsigned long long)a4 referenceLocation:(id)a5 confidence:(double)a6 finerGranularityMapItemConfidence:(double)a7 loiIdentifier:(id)a8 preferredName:(id)a9;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0 userType:(unsigned long long)a1 userTypeSource:(unsigned long long)a2 placeType:(unsigned long long)a3 referenceLocation:(id)a4 confidence:(double)a5 loiIdentifier:(id)a6 preferredName:(id)a7;
- (id)nameFromUserType:(unsigned long long)a0;
- (BOOL)isEqualToPlaceInference:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMapItem:(id)a0 finerGranularityMapItem:(id)a1 userType:(unsigned long long)a2 userTypeSource:(unsigned long long)a3 placeType:(unsigned long long)a4 referenceLocation:(id)a5 confidence:(double)a6 finerGranularityMapItemConfidence:(double)a7 loiIdentifier:(id)a8;
- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 userType:(unsigned long long)a1 userTypeSource:(unsigned long long)a2 placeType:(unsigned long long)a3 referenceLocation:(id)a4 confidence:(double)a5 loiIdentifier:(id)a6;

@end
