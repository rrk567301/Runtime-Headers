@class NSUUID;

@interface _HKRaceRouteLocationSeriesQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSUUID *clusterUUID;
@property (nonatomic) unsigned long long workoutSelection;
@property (copy, nonatomic) NSUUID *workoutUUID;
@property (nonatomic) double timestampAnchor;
@property (nonatomic) unsigned long long limit;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
