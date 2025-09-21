@class NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject {
    NSMutableDictionary *_groupingConfigurations;
    unsigned long long _detectorModel;
}

- (id)initWithDetectorModel:(unsigned long long)a0;
- (unsigned long long)detectorModel;
- (void).cxx_destruct;

@end
