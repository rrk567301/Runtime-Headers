@interface SNKShotDebugger : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ kShotTrainingResults;
    void /* unknown type, empty encoding */ kShotValidationResults;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithURLs:(id)a0;
- (void)saveKShotFeaturizationStreamResult:(id)a0;
- (void)writeKShotFeaturizationStreamCompletion:(id)a0;
- (void)writeKShotFeaturizationStreamResults;
- (void)writeKShotSegmentationResult:(id)a0;

@end
