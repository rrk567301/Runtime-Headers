@interface PIRetouchBrushStroke : NUMutableBrushStroke

@property (nonatomic) long long type;
@property (nonatomic) struct CGPoint { double x; double y; } sourceOffset;
@property (nonatomic) char repairEdges;
@property (readonly, nonatomic) char hasSource;

+ (id)dictionaryFromBrushStroke:(id)a0;

@end
