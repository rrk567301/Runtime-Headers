@class NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject {
    NSMutableDictionary *_groupingConfigurations;
    unsigned long long _detectorModel;
}

- (id)initWithDetectorModel:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)detectorModel;

@end
