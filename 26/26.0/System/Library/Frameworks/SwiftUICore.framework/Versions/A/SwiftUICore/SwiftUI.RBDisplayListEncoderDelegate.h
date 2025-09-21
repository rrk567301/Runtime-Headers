@class RBEncoderSet;

@interface SwiftUI.RBDisplayListEncoderDelegate : NSObject <RBEncoderDelegate> {
    void /* unknown type, empty encoding */ encoder;
}

@property (nonatomic, readonly) RBEncoderSet *encoderSet;

- (id)encodedFontData:(id)a0 cgFont:(struct CGFont { } *)a1 error:(id *)a2;
- (id)encodedImageData:(struct { int x0; void *x1; })a0 error:(id *)a1;
- (id)init;
- (id)encodedCGFontData:(struct CGFont { } *)a0 error:(id *)a1;
- (BOOL)shouldEncodeFontSubset:(struct CGFont { } *)a0;
- (void).cxx_destruct;

@end
