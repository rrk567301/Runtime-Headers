@class SPUISDataDetectorResultGenerator;

@interface SPKDataDetectorsStoreQuery : SPKQuery {
    SPUISDataDetectorResultGenerator *_generator;
}

+ (unsigned int)searchDomain;

- (void)cancel;
- (void).cxx_destruct;
- (void)start;

@end
