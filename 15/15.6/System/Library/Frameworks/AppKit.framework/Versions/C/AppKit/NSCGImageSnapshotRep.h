@class NSSnapshotContextSignature;

@interface NSCGImageSnapshotRep : NSImageRep {
    struct CGImage { } *_cgImage;
    NSSnapshotContextSignature *_signature;
}

@property (readonly) struct CGImage { } *image;

+ (char)supportsSecureCoding;
+ (id)classFallbacksForKeyedArchiver;
+ (void)_lockFocusForCreatingSnapshot:(char)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2 hints:(id)a3 flipped:(char)a4;
+ (struct CGImage { } *)_unlockFocusAndPerformBlockUsingCGImageAndCapturingContext:(id /* block */)a0;
+ (void)lockFocusForCreatingCGImageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 hints:(id)a2 flipped:(char)a3;
+ (void)lockFocusForCreatingSnapshotWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 hints:(id)a2 flipped:(char)a3;
+ (struct CGImage { } *)unlockFocusCreatingCGImageAndDrawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (id)unlockFocusCreatingCGImageSnapshotRep;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (Class)classForArchiver;
- (id)_imageRepsForEncodingWithCoder:(id)a0;
- (char)_isValid;
- (struct CGImage { } *)_snapshotRep_CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (char)_snapshotRep_commonSetupWithWithCGImage:(struct CGImage { } *)a0 snapshotContextSignature:(id)a1;
- (long long)bitsPerSample;
- (id)colorSpace;
- (char)draw;
- (char)hasAlpha;
- (id)initWithCGImage:(struct CGImage { } *)a0 drawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 applicableForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(id)a3 hints:(id)a4;
- (id)initWithCGImage:(struct CGImage { } *)a0 snapshotContextSignature:(id)a1;
- (char)isApplicableForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 hints:(id)a2;
- (long long)pixelsHigh;
- (long long)pixelsWide;

@end
