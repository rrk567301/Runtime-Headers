@class SSDataDetectorResultGenerator;

@interface SPKDataDetectorsStoreQuery : SPKQuery {
    SSDataDetectorResultGenerator *_generator;
}

+ (unsigned int)searchDomain;

- (void)start;
- (void)cancel;
- (void).cxx_destruct;

@end
