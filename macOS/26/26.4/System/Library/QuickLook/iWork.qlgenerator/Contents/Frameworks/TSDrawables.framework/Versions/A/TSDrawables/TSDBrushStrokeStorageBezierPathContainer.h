@class TSUBezierPath;

@interface TSDBrushStrokeStorageBezierPathContainer : NSObject

@property (readonly, nonatomic) TSUBezierPath *originalPath;
@property (readonly, nonatomic) TSUBezierPath *pathWithPossibleSmoothing;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithOriginalPath:(id)a0 pathWithPossibleSmoothing:(id)a1;

@end
