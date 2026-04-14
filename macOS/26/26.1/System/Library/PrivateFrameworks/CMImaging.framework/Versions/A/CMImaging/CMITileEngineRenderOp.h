@class CRGNode, NSMutableArray;
@protocol CRGRenderProvider;

@interface CMITileEngineRenderOp : NSObject

@property (retain, nonatomic) CRGNode<CRGRenderProvider> *node;
@property (nonatomic) struct { void /* unknown type, empty encoding */ p0; void /* unknown type, empty encoding */ p1; } outputROI;
@property (nonatomic) void /* unknown type, empty encoding */ normOutputOffset;
@property (nonatomic) void /* unknown type, empty encoding */ normOutputSize;
@property (nonatomic) int passIndex;
@property (retain, nonatomic) NSMutableArray *outputsRelease;

- (id)description;
- (void).cxx_destruct;
- (void)decrementRefs;
- (void)incrementRefs;

@end
