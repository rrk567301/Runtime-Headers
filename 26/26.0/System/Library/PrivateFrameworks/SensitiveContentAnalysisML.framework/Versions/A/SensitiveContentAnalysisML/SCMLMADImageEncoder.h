@class MADService;

@interface SCMLMADImageEncoder : NSObject {
    MADService *_service;
}

+ (id)getServiceWithError:(id *)a0;
+ (id)newRequestWithType:(unsigned long long)a0 error:(id *)a1;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (void)embedPixelBufferAsynchronously:(struct __CVBuffer { } *)a0 requestType:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
