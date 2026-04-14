@class NSArray, RSFloorPlan;

@interface RSAsset : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RSFloorPlan *floorPlan;
@property (retain, nonatomic) NSArray *mirrorPoints;
@property (nonatomic) BOOL isCaptured;
@property (readonly, nonatomic) long long version;
@property (retain, nonatomic) RSFloorPlan *rawFloorPlan;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;

@end
