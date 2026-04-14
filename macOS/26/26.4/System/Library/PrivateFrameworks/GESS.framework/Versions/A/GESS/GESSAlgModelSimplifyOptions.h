@class GESSTextureTransferOptions;

@interface GESSAlgModelSimplifyOptions : NSObject

@property unsigned int triangleCount;
@property unsigned int textureResolution;
@property (retain) GESSTextureTransferOptions *textureTransferOptions;

- (void).cxx_destruct;
- (id)init;

@end
