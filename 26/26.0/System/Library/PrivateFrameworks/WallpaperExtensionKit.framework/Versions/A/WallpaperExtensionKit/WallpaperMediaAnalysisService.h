@class MADService;

@interface WallpaperMediaAnalysisService : NSObject {
    MADService *_service;
}

- (id)init;
- (void).cxx_destruct;
- (void)performMLEnhancementOnPixelBuffer:(struct __CVBuffer { } *)a0 imageOrientation:(unsigned int)a1 requestUUID:(id)a2 completionHandler:(id /* block */)a3;

@end
