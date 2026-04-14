@class NSURL, NSSecurityScopedURLWrapper;

@interface MRAnimatedArtwork : NSObject {
    NSSecurityScopedURLWrapper *_assetFileURLWrapper;
}

@property (readonly, nonatomic) NSURL *assetFileURL;

- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (id)initWithAssetFileURL:(id)a0;
- (id)protobufWithFormat:(id)a0;

@end
