@class RBEncoderSet;

@interface SwiftUI.RBDisplayListEncoderDelegate : NSObject <RBEncoderDelegate> {
    void /* unknown type, empty encoding */ encoder;
}

@property (nonatomic, readonly) unsigned int deploymentFormat;
@property (nonatomic, readonly) RBEncoderSet *encoderSet;

- (BOOL)shouldEncodeFontSubset:(struct CGFont { } *)a0;
- (id)encodedFontData:(id)a0 cgFont:(struct CGFont { } *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)encodedImageData:(struct { int x0; void *x1; })a0 error:(id *)a1;
- (id)encodedCGFontData:(struct CGFont { } *)a0 error:(id *)a1;

@end
