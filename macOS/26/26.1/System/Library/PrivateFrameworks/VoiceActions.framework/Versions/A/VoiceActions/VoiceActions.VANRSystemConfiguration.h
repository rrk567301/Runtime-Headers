@interface VoiceActions.VANRSystemConfiguration : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ rebuildSpotterOnRestart;
    void /* unknown type, empty encoding */ modelSelection;
    void /* unknown type, empty encoding */ computeUnits;
    void /* unknown type, empty encoding */ useResultGenerator;
    void /* unknown type, empty encoding */ enableSecondPass;
    void /* unknown type, empty encoding */ gainToApplyToUserSpokenAudio;
    void /* unknown type, empty encoding */ asrStringMatchingStrategy;
    void /* unknown type, empty encoding */ autoConfigureThresholds;
    void /* unknown type, empty encoding */ callDelegateOnAsrMismatch;
    void /* unknown type, empty encoding */ listenToAsrForEnrollments;
    void /* unknown type, empty encoding */ addNBestPronunciationsBasedOnGrapheme;
    void /* unknown type, empty encoding */ addNBestPronunciationsBasedOnPhoneme;
    void /* unknown type, empty encoding */ dumpDebugInfo;
    void /* unknown type, empty encoding */ useSingletonNameRecognizer;
    void /* unknown type, empty encoding */ enrollmentOptimizations;
    void /* unknown type, empty encoding */ minimumSilenceProbability;
    void /* unknown type, empty encoding */ defaultThreshold;
    void /* unknown type, empty encoding */ returnKeywordAudio;
    void /* unknown type, empty encoding */ debounce;
    void /* unknown type, empty encoding */ verbose;
    void /* unknown type, empty encoding */ stopWhenEmpty;
    void /* unknown type, empty encoding */ preSilenceCheckOverride;
    void /* unknown type, empty encoding */ postSilenceCheckOverride;
    void /* unknown type, empty encoding */ duringSpeechCheckOverride;
    void /* unknown type, empty encoding */ maximumBufferSamples;
    void /* unknown type, empty encoding */ speechBiasOptions;
    void /* unknown type, empty encoding */ secondPassTaskHint;
    void /* unknown type, empty encoding */ ignoreMultiple1stPassResultsInSameStride;
    void /* unknown type, empty encoding */ extraAudioDurationAfterPredictionWindow;
    void /* unknown type, empty encoding */ extraAudioDurationBeforePredictionWindow;
    void /* unknown type, empty encoding */ passesMustMatch;
    void /* unknown type, empty encoding */ automaticallyPrepareSpeechAPI;
    void /* unknown type, empty encoding */ limit2ndPassSearchToNBest;
    void /* unknown type, empty encoding */ customLMWeight;
}

@end
