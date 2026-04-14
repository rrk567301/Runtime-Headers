@class FCAsyncOnceOperation, NTPBBloomFilterInfo;

@interface NRNewsDaemonBloomFilterInfoService : NSObject <NRBloomFilterInfoService>

@property (copy, nonatomic) NTPBBloomFilterInfo *bloomFilterInfo;
@property (readonly, nonatomic) FCAsyncOnceOperation *fetchOnceOperation;

- (id)init;
- (void).cxx_destruct;
- (void)fetchWebURLBloomFilterInfoWithCompletion:(id /* block */)a0;
- (void)_fetchBloomFilterInfoWithCompletion:(id /* block */)a0;

@end
