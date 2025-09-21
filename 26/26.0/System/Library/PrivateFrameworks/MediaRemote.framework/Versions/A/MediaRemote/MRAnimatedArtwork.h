@class NSURL, NSSecurityScopedURLWrapper;

@interface MRAnimatedArtwork : NSObject {
    NSSecurityScopedURLWrapper *_assetFileURLWrapper;
}

@property (readonly, nonatomic) NSURL *assetFileURL;

- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetFileURL:(id)a0;
- (id)protobufWithFormat:(id)a0;

@end
