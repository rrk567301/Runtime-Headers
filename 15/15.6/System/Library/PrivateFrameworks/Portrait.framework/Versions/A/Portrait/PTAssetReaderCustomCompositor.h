@class NSDictionary, NSString;

@interface PTAssetReaderCustomCompositor : NSObject <AVVideoCompositing>

@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) char supportsWideColorSourceFrames;
@property (readonly, nonatomic) char supportsHDRSourceFrames;
@property (readonly, nonatomic) char canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderContextChanged:(id)a0;
- (void)startVideoCompositionRequest:(id)a0;

@end
