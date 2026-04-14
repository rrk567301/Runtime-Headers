@class MADService;

@interface SCMLMADTextEncoder : NSObject {
    MADService *_service;
}

+ (id)getServiceWithError:(id *)a0;
+ (id)newRequestWithError:(id *)a0 withVersion:(unsigned long long)a1;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (void)embedTextAsynchronously:(id)a0 version:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
