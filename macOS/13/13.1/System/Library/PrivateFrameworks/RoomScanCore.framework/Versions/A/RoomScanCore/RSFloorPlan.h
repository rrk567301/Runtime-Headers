@class NSArray;

@interface RSFloorPlan : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *walls;
@property (retain, nonatomic) NSArray *doors;
@property (retain, nonatomic) NSArray *windows;
@property (retain, nonatomic) NSArray *openings;
@property (retain, nonatomic) NSArray *opendoors;
@property (retain, nonatomic) NSArray *objects;
@property (retain, nonatomic) NSArray *curvedWalls;
@property unsigned int groupId;
@property float ceilingHeight;
@property float floorHeight;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)updateObjects:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 withGroupId:(unsigned int)a1;
- (void)resetAllSurfacesUpdateStatus;
- (void)updateStructure:(id)a0;
- (void)appendVisualWallsForOpenings;
- (void)updateSurfacesHeight:(id)a0 withCeiling:(float)a1 floor:(float)a2;
- (void)setWallsHeight:(id)a0;
- (void)updateWallsHeight;
- (void)updateOpeningsHeight;
- (void)updateWindowsHeight;
- (void)updateDoorsHeight;
- (void)updateOpenDoorsHeight;
- (void)updateNodesHeight;
- (id)filterNoParentNodes:(id)a0;
- (void)filterOtherTypeWalls;
- (void)setupHeight;

@end
