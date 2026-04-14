@class NSString, NSCoder, NSMutableDictionary;

@interface CCDataEncoder : NSObject <CCVisitor> {
    NSCoder *_coder;
    NSMutableDictionary *_textureStorage;
    NSMutableDictionary *_bufferStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)visitBOOL:(BOOL)a0 name:(id)a1;
- (void)visitBoraRegionPixelShift:(struct { int x0[5]; int x1[5]; })a0 name:(id)a1;
- (void)encode:(id)a0 withCoder:(id)a1;
- (BOOL)hasBufferStorage;
- (BOOL)hasTextureStorage;
- (id)initWithTextureStorage:(id)a0 bufferStorage:(id)a1;
- (void)visit:(id)a0 name:(id)a1;
- (void)visitBlurAlgorithmMode:(unsigned long long)a0 name:(id)a1;
- (void)visitBoraGridAlignment:(struct CCBoraGridAlignment { long long x0; int x1; })a0 name:(id)a1;
- (void)visitBuffer:(id)a0 name:(id)a1;
- (void)visitBufferArray:(id)a0 name:(id)a1;
- (void)visitCArray:(const id *)a0 length:(unsigned long long)a1 name:(id)a2;
- (void)visitDepthCompressionParameters:(struct CCDepthCompressionPlaneParameters { float x0; })a0 name:(id)a1;
- (void)visitDepthReprojectionMode:(unsigned long long)a0 name:(id)a1;
- (void)visitDepthTexture:(id)a0 name:(id)a1;
- (void)visitDepthVisualizationType:(long long)a0 name:(id)a1;
- (void)visitDictionary:(id)a0 name:(id)a1;
- (void)visitDisplayCorrectionAlgorithm:(long long)a0 name:(id)a1;
- (void)visitDisplayCorrectionDepthOrder:(unsigned long long)a0 name:(id)a1;
- (void)visitDisplayCorrectionIgnoreFlagAlgorithm:(long long)a0 name:(id)a1;
- (void)visitDisplayCorrectionWarper:(unsigned long long)a0 name:(id)a1;
- (void)visitDisplayToTanAngleTexture:(id)a0 name:(id)a1;
- (void)visitEye:(long long)a0 name:(id)a1;
- (void)visitFloat:(float)a0 name:(id)a1;
- (void)visitFloatBuffer:(float *)a0 length:(unsigned long long)a1 keys:(id)a2 name:(id)a3;
- (void)visitHTMLElement:(id)a0 name:(id)a1;
- (void)visitHandAnchors:(id)a0 name:(id)a1;
- (void)visitInt64:(long long)a0 name:(id)a1;
- (void)visitInt:(int)a0 name:(id)a1;
- (void)visitIntBuffer:(int *)a0 length:(unsigned long long)a1 keys:(id)a2 name:(id)a3;
- (void)visitLensModel:(long long)a0 name:(id)a1;
- (void)visitMTLBuffer2D:(id)a0 name:(id)a1;
- (void)visitMTLClearColor:(struct { double x0; double x1; double x2; double x3; })a0 name:(id)a1;
- (void)visitMTLPixelFormat:(unsigned long long)a0 name:(id)a1;
- (void)visitMTLRasterizationRateMap:(id)a0 name:(id)a1;
- (void)visitMTLSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 name:(id)a1;
- (void)visitMTLSizeAndAlign:(struct { unsigned long long x0; unsigned long long x1; })a0 name:(id)a1;
- (void)visitMTLViewPort:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0 name:(id)a1;
- (void)visitMeshAnchors:(id)a0 name:(id)a1;
- (void)visitNSArray:(id)a0 name:(id)a1;
- (void)visitNSInteger:(long long)a0 name:(id)a1;
- (void)visitNSNumberArray:(id)a0 name:(id)a1;
- (void)visitNSString:(id)a0 name:(id)a1;
- (void)visitNSUInteger:(unsigned long long)a0 name:(id)a1;
- (void)visitOffsetScale:(struct CCOffsetScale { })a0 name:(id)a1;
- (void)visitSimdFloat2:(SEL)a0 name:(id)a1;
- (void)visitSimdFloat2Buffer:(void *)a0 length:(unsigned long long)a1 keys:(id)a2 name:(id)a3;
- (void)visitSimdFloat3:(SEL)a0 name:(id)a1;
- (void)visitSimdFloat3Buffer:(void *)a0 length:(unsigned long long)a1 keys:(id)a2 name:(id)a3;
- (void)visitSimdFloat3x3:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 name:(id)a1;
- (void)visitSimdFloat4:(SEL)a0 name:(id)a1;
- (void)visitSimdFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(id)a1;
- (void)visitSimdInt2:(SEL)a0 name:(id)a1;
- (void)visitSimdQuatF:(struct { })a0 name:(id)a1;
- (void)visitSimdUInt2:(SEL)a0 name:(id)a1;
- (void)visitSimdUShort2:(SEL)a0 name:(id)a1;
- (void)visitTanAngleRange:(struct CCTanAngleRange { float x0; float x1; float x2; float x3; })a0 name:(id)a1;
- (void)visitTanAngleToPixelTexture:(id)a0 name:(id)a1;
- (void)visitTexture:(id)a0 colorSpace:(long long)a1 format:(unsigned long long)a2 name:(id)a3;
- (void)visitTextureArray:(id)a0 colorSpace:(long long)a1 format:(unsigned long long)a2 name:(id)a3;
- (void)visitTextureUsage:(unsigned long long)a0 name:(id)a1;
- (void)visitUInt16:(unsigned short)a0 name:(id)a1;

@end
