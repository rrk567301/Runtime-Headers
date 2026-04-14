@class NSString;

@interface DGDetectedEdge : NSObject <DGOperationCoding>

@property (readonly) struct CGPoint { double x; double y; } pt0;
@property (readonly) double angle0;
@property (readonly) struct CGPoint { double x; double y; } pt1;
@property (readonly) double angle1;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detectedEdgeWithPt0:(struct CGPoint { double x0; double x1; })a0 angle0:(double)a1 pt1:(struct CGPoint { double x0; double x1; })a2 angle1:(double)a3;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
