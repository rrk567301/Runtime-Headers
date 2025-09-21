@class TDElementProduction, NSSet, TDRenditionType, TDRenditionKeySpec, NSDate;

@interface TDRenditionSpec : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) char opaque;
@property (nonatomic) char monochrome;
@property (nonatomic) int packedPointX;
@property (nonatomic) int packedPointY;
@property (nonatomic) char alphaCrop;
@property (retain, nonatomic) TDRenditionKeySpec *keySpec;
@property (retain, nonatomic) NSSet *packedRenditions;
@property (retain, nonatomic) TDElementProduction *production;
@property (retain, nonatomic) TDRenditionType *renditionType;
@property (retain, nonatomic) TDRenditionSpec *parentRendition;
@property (retain, nonatomic) NSSet *properties;
@property (nonatomic) char preserveForArchiveOnly;
@property (nonatomic) struct CGPoint { double x0; double x1; } packedPoint;

- (id)propertiesAsDictionary;
- (void)awakeFromInsert;
- (id)renditionType;
- (char)canBePackedWithDocument:(id)a0;
- (id)createCSIRepresentationWithCompression:(char)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)drawPackableRenditionInContext:(struct CGContext { } *)a0 withDocument:(id)a1;
- (void)resetToBaseKeySpec;
- (void)setRenditionType:(id)a0;
- (char)updatePackingPropertiesWithDocument:(id)a0;

@end
