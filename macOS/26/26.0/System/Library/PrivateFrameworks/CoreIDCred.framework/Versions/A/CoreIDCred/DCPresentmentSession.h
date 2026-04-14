@class DCPresentmentSelection, NSArray, DCCredentialResponse, NSData, NSError, DCPresentmentRequest;

@interface DCPresentmentSession : NSObject {
    void /* unknown type, empty encoding */ connectionConfigurationStatus;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ partitions;
    void /* unknown type, empty encoding */ presentmentType;
    void /* unknown type, empty encoding */ options;
}

- (id)init;
- (void).cxx_destruct;
- (void)buildCredentialResponseForSelection:(DCPresentmentSelection *)a0 completion:(void (^)(DCCredentialResponse *, NSError *))a1;
- (void)buildErrorResponseWithStatus:(unsigned long long)a0 completion:(void (^)(NSData *, NSError *))a1;
- (void)buildGenericDataResponse:(NSData *)a0 completion:(void (^)(NSData *, NSError *))a1;
- (void)buildResponseForSelection:(DCPresentmentSelection *)a0 completion:(void (^)(NSData *, NSError *))a1;
- (void)generateTransportKeyForSpecification:(unsigned long long)a0 completion:(void (^)(NSData *, NSError *))a1;
- (id)initWithPartitions:(id)a0 presentmentType:(unsigned long long)a1;
- (id)initWithPartitions:(id)a0 presentmentType:(unsigned long long)a1 options:(id)a2;
- (void)interpretGenericDataRequest:(NSData *)a0 completion:(void (^)(NSData *, NSError *))a1;
- (void)interpretRequest:(DCPresentmentRequest *)a0 completion:(void (^)(NSArray *, NSError *))a1;

@end
