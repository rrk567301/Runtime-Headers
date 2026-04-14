@class NSArray, DDScannerServiceConfiguration;

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration *_dataDetectorConfiguration;
}

@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems;

- (void).cxx_destruct;
- (void)stop;
- (id)debugName;
- (void)q_updateQueryResult;
- (id)initWithRecognitionSession:(id)a0;
- (id)_dataDetectorResultsForSessionResult:(id)a0;
- (void)_enumerateDetectedRangesForContextualTextResults:(id)a0 usingBlock:(id /* block */)a1;

@end
