@interface RSGeometryMeta : NSObject <NSCopying>

@property (nonatomic) BOOL isCenterScaleUpdated;
@property (nonatomic) float pixelSize;
@property (nonatomic) float floorHeight;
@property (nonatomic) float ceilingHeight;
@property (nonatomic) float supportHeight;
@property (nonatomic) void /* unknown type, empty encoding */ center;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) void /* unknown type, empty encoding */ shift;
@property (nonatomic) int imageSize;
@property (nonatomic) int zSlice;
@property (nonatomic) float visualFloorHeight;
@property (nonatomic) float visualCeilingHeight;
@property (nonatomic) void /* unknown type, empty encoding */ floorCeilingCount;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)reset;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToRSGeometryMeta:(id)a0;

@end
