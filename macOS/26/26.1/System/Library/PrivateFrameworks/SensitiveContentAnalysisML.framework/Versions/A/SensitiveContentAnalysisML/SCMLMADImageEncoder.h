@class MADService;

@interface SCMLMADImageEncoder : NSObject {
    MADService *_service;
}

+ (id)getServiceWithError:(id *)a0;
+ (id)newRequestWithType:(unsigned long long)a0 withVersion:(unsigned long long)a1 error:(id *)a2;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (void)embedPixelBufferAsynchronously:(struct __CVBuffer { } *)a0 requestType:(unsigned long long)a1 version:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
