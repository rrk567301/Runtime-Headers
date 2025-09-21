@class NSNumber, NSOrderedSet;

@interface TDNamedGradientRenditionSpec : TDRenditionSpec

@property (copy, nonatomic) NSNumber *gradientType;
@property (retain, nonatomic) NSOrderedSet *colorStops;
@property (copy, nonatomic) NSNumber *gradientStartX;
@property (copy, nonatomic) NSNumber *gradientStartY;
@property (copy, nonatomic) NSNumber *gradientEndX;
@property (copy, nonatomic) NSNumber *gradientEndY;
@property (nonatomic) struct CGPoint { double x0; double x1; } gradientStartPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } gradientEndPoint;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;

@end
