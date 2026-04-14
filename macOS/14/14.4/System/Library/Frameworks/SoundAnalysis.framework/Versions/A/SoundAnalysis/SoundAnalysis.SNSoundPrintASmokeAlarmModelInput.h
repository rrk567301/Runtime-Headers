@class NSSet;

@interface SoundAnalysis.SNSoundPrintASmokeAlarmModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ input1;
    void /* unknown type, empty encoding */ stateIn;
    void /* unknown type, empty encoding */ thresholdedHistoryIn;
    void /* unknown type, empty encoding */ detectedHistoryIn;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
