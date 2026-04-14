@class NSArray, DDScannerServiceConfiguration;

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration *_dataDetectorConfiguration;
}

@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems;

- (void).cxx_destruct;
- (void)stop;
- (id)debugName;
- (id)_dataDetectorResultsForSessionResult:(id)a0;
- (void)_enumerateDetectedRangesForContextualTextResults:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
