@protocol CRConfidenceThresholdProviding;

@interface TextRecognition.CREngineFast : _TtCs12_SwiftObject <TextRecognition.CRConfidenceThresholdProvidingFacade> {
    void /* unknown type, empty encoding */ confidenceThresholdProviderFacade;
    void /* unknown type, empty encoding */ textRecognitionStats;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ languageCorrection;
    void /* unknown type, empty encoding */ shouldCancel;
}

@property (nonatomic, readonly) id<CRConfidenceThresholdProviding> confidenceThresholdProvider;

@end
