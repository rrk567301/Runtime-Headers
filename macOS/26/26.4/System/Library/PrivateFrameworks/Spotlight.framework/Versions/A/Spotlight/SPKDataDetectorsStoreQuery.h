@class SPUISDataDetectorResultGenerator;

@interface SPKDataDetectorsStoreQuery : SPKQuery {
    SPUISDataDetectorResultGenerator *_generator;
}

+ (unsigned int)searchDomain;
+ (int)sourceKind;

- (id)createActivity;
- (void)_cancel;
- (void).cxx_destruct;
- (void)_start;

@end
