@class SPUISDataDetectorResultGenerator;

@interface SPKDataDetectorsStoreQuery : SPKQuery {
    SPUISDataDetectorResultGenerator *_generator;
}

+ (unsigned int)searchDomain;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;

@end
