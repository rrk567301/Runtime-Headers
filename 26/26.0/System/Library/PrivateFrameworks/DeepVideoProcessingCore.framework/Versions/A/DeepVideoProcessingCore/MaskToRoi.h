@class GGMMetalToolBox;

@interface MaskToRoi : NSObject {
    GGMMetalToolBox *_metalToolbox;
    unsigned long long _width;
    unsigned long long _height;
    void /* unknown type, empty encoding */ _neighbors[8];
    void *_connectedPixelsQueue;
    void *_bboxList;
}

@property struct __CVBuffer { } *integralSumPixelBuffer;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)getLSBBoxesUsingGraphTraversalFrom:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pixValThreshold:(float)a2 bboxSizeThreshold:(float)a3 scaleFactorInv:(float[4])a4 validWidth:(int)a5 validHeight:(int)a6 lightSourceBBox:(void *)a7;
- (id)_findBoundingBoxesWithSizeThreshold:(float)a0 LsThreshold:(float)a1 scalingFactor:(float[4])a2 validWidth:(int)a3 validHeight:(int)a4;
- (long long)convertInternalBBoxes:(long long)a0 outputArray:(id *)a1;
- (long long)convertInternalBBoxesToROI:(long long)a0 outputArray:(id *)a1;
- (void)convertPackedMaskToRegular:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;
- (long long)extractRoiByGraphTraversalInput:(struct __CVBuffer { } *)a0 bboxSizeThreshold:(float)a1 scaleFactorInv:(float[4])a2 validWidth:(int)a3 validHeight:(int)a4 lightSourceBBox:(void *)a5;
- (long long)getBBoxesUsingGraphTraversalFrom:(SEL)a0 pixValThreshold:(struct __CVBuffer { } *)a1 bboxSizeThreshold:(float)a2 scaleFactor:(float)a3 roi:(int)a4 returnAsDetectedROI:(BOOL)a5 outputArray:(id *)a6;
- (id)initWithMetalToolBox:(id)a0;

@end
