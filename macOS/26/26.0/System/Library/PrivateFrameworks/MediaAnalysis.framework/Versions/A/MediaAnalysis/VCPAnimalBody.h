@class NSString, VNAnimalprint;

@interface VCPAnimalBody : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property float confidence;
@property int animalID;
@property (retain) NSString *label;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timerange;
@property (retain) VNAnimalprint *animalPrint;

- (id)init;
- (void).cxx_destruct;

@end
