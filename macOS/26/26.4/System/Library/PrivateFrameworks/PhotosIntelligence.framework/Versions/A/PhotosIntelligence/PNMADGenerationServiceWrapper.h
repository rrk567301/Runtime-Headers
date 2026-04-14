@class MADGenerationService;

@interface PNMADGenerationServiceWrapper : NSObject

@property (readonly, nonatomic) MADGenerationService *generationService;

- (void).cxx_destruct;
- (id)init;
- (void)requestAlchemistProcessingForPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)requestAlchemistProcessingForURL:(id)a0 options:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
