@class GESSTextureTransferOptions;

@interface GESSAlgAdaptiveQuadModelConvertOptions : NSObject

@property unsigned int outputFaceNumber;
@property BOOL enableSimplify;
@property unsigned int textureResolution;
@property (retain) GESSTextureTransferOptions *textureTransferOptions;

- (void).cxx_destruct;
- (id)init;

@end
