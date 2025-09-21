@class NUBrushStrokeMaskIntersector, PIInpaintMask;

@interface _CleanupSegmentInfo : NSObject

@property (nonatomic) long long segmentIndex;
@property (retain, nonatomic) NUBrushStrokeMaskIntersector *intersector;
@property (retain, nonatomic) PIInpaintMask *mask;
@property (nonatomic) char usingTargetPoints;
@property (nonatomic) char isWire;

- (void).cxx_destruct;

@end
