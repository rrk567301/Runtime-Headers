@class GESSTextureTransferOptions;

@interface GESSAlgModelSimplifyOptions : NSObject

@property unsigned int triangleCount;
@property unsigned int textureResolution;
@property (retain) GESSTextureTransferOptions *textureTransferOptions;

- (id)init;
- (void).cxx_destruct;

@end
