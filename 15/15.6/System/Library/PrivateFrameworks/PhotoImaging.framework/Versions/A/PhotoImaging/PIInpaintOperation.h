@class NSArray, NUBrushStroke;

@interface PIInpaintOperation : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) char hasExclusionMask;
@property (readonly, nonatomic) char isTapSelect;
@property (readonly, nonatomic) char isTargetPoints;
@property (readonly, nonatomic) char isFilledBrushStroke;
@property (readonly, nonatomic) char isScribbledSelection;
@property (readonly, nonatomic) char isLassoedSelection;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSArray *maskIdentifiers;
@property (readonly, nonatomic) NSArray *exclusionMaskIdentifiers;
@property (readonly, nonatomic) NUBrushStroke *brushStroke;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } sourceOffset;
@property (readonly, nonatomic) char repairEdges;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)nu_updateDigest:(id)a0;
- (char)isEqualtoInpaintOperation:(id)a0;

@end
