@class NSArray, NSMutableArray;

@interface ICNFIMAPCompoundDownload : ICNFIMAPDownload {
    NSMutableArray *_subdownloads;
}

@property (readonly, copy) NSArray *subdownloads;
@property (readonly) unsigned long long countOfSubdownloads;

- (id)description;
- (id)error;
- (void).cxx_destruct;
- (BOOL)isComplete;
- (unsigned int)bytesFetched;
- (id)createCopy;
- (unsigned int)expectedLength;
- (void)processResults;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)objectInSubdownloadsAtIndex:(unsigned long long)a0;
- (void)removeObjectFromSubdownloadsAtIndex:(unsigned long long)a0;
- (void)addSubdownload:(id)a0;
- (void)removeSubdownload:(id)a0;

@end
