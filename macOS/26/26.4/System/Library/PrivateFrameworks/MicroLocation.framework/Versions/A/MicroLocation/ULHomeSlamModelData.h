@class NSArray, NSNumber;

@interface ULHomeSlamModelData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mapROIs;
@property (retain, nonatomic) NSArray *trajectoryPoints;
@property (retain, nonatomic) NSNumber *numberOfInputSegments;
@property (retain, nonatomic) NSNumber *numberOfInputStaticIntervals;
@property (retain, nonatomic) NSNumber *numberOfMappedStaticIntervals;
@property (retain, nonatomic) NSNumber *numberOfFinalSegments;
@property (retain, nonatomic) NSNumber *numberOfFilteredSubmaps;
@property (retain, nonatomic) NSNumber *numberOfROIs;
@property (retain, nonatomic) NSNumber *numberOfWalkwayPoints;

+ (id)new;
+ (id)emptyHomeSlamModelData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMapROIs:(id)a0 trajectoryPoints:(id)a1 numInputSegments:(id)a2 numInputStaticIntervals:(id)a3 numMappedStaticIntervals:(id)a4 numFinalSegments:(id)a5 numFilteredSubmaps:(id)a6 numROIs:(id)a7 numWalkwayPoints:(id)a8;
- (id)initWithMapROIs:(id)a0 trajectoryPoints:(id)a1 numInputSegments:(id)a2 numberOfInputStaticIntervals:(id)a3 numberOfMappedStaticIntervals:(id)a4 numberOfMappedSegments:(id)a5 numberOfFilteredSubmaps:(id)a6 numROIs:(id)a7 numWalkwayPoints:(id)a8;

@end
