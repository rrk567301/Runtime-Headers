@class NSDictionary, _PASNotificationToken;

@interface SGStructuredEventExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_inputMapping;
    NSDictionary *_outputMapping;
    NSDictionary *_supportedProviders;
    NSDictionary *_engineConfig;
}

+ (id)sharedInstance;
+ (id)inputFromTaggedCharacterRanges:(id)a0 usingInputMapping:(id)a1 forModel:(id)a2 pflTraining:(char)a3 hasEvent:(char)a4;

- (void).cxx_destruct;
- (id)_init;
- (char)isSenderSupportedForExtraction:(id)a0;
- (unsigned long long)addressComponentThreshold;
- (id)engineConfig;
- (id)gazetteer;
- (id)inputMapping;
- (char)isSenderSupportedForMLDefaultExtraction:(id)a0;
- (char)isSenderSupportedForMLHybridExtraction:(id)a0;
- (char)isSenderSupportedForPFLTraining:(id)a0;
- (char)isSenderSupportedForShadowExtraction:(id)a0;
- (id)loadModel;
- (unsigned long long)maxMergeDistanceForSection:(id)a0 label:(id)a1;
- (id)modelInferences:(id)a0;
- (id)modelInferences:(id)a0 pflTraining:(char)a1 hasEvent:(char)a2;
- (id)outputMapping;
- (unsigned long long)stripRepeatedContentForSectionLength:(id)a0 label:(id)a1;
- (id)supportedProviders;
- (void)updateAll;

@end
