@class CRGExplicitPixelFormat, NSString, CRGNode, CRGInput, CRGOutput, CRGExplicitDimensions;
@protocol MTLTexture;

@interface CRGPort : NSObject <CRGPort> {
    id<MTLTexture> _texture;
    struct { void /* unknown type, empty encoding */ p0; void /* unknown type, empty encoding */ p1; } _roi;
    int _ref;
}

@property (readonly, weak, nonatomic) CRGNode *node;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) CRGInput *asInput;
@property (readonly, nonatomic) CRGOutput *asOutput;
@property (nonatomic) BOOL fullSize;
@property (retain, nonatomic) CRGExplicitDimensions *resolvedDimensions;
@property (retain, nonatomic) CRGExplicitPixelFormat *resolvedPixelFormat;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)incorporateROI:(struct { })a0;
- (BOOL)setROI:(struct { })a0;
- (int)decRef;
- (void /* unknown type, empty encoding */)getNormalizedROIMax;
- (void /* unknown type, empty encoding */)getNormalizedROIMin;
- (void /* unknown type, empty encoding */)getOffsetWithNormalized:(SEL)a0;
- (struct { })getROI;
- (int)getRef;
- (void /* unknown type, empty encoding */)getSizeWithNormalized:(SEL)a0;
- (int)incRef;
- (id)initWithName:(id)a0 node:(id)a1;
- (void)resetROI;
- (void)resetRef;

@end
