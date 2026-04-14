@interface SummarizationKit.TelemetrySignalCollector : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ inputLength;
    void /* unknown type, empty encoding */ maxTokenLength;
    void /* unknown type, empty encoding */ overestimatedInputTokensCount;
    void /* unknown type, empty encoding */ overestimatedTruncatedInputTokensCount;
    void /* unknown type, empty encoding */ inputHasUnsupportedEmoji;
    void /* unknown type, empty encoding */ inputHasURL;
    void /* unknown type, empty encoding */ inputHasTapback;
    void /* unknown type, empty encoding */ titleLength;
    void /* unknown type, empty encoding */ textualContextLength;
    void /* unknown type, empty encoding */ subtitleLength;
    void /* unknown type, empty encoding */ bodyLength;
    void /* unknown type, empty encoding */ subjectLength;
    void /* unknown type, empty encoding */ senderLength;
    void /* unknown type, empty encoding */ recipientsLength;
    void /* unknown type, empty encoding */ participantsLength;
    void /* unknown type, empty encoding */ attachmentLength;
    void /* unknown type, empty encoding */ styles;
    void /* unknown type, empty encoding */ outputLength;
    void /* unknown type, empty encoding */ isInputTruncated;
    void /* unknown type, empty encoding */ isInputSanitized;
    void /* unknown type, empty encoding */ isOutputSanitized;
    void /* unknown type, empty encoding */ isOutputFactuallyConsistent;
    void /* unknown type, empty encoding */ latencyPreprocessing;
    void /* unknown type, empty encoding */ latencyInputSanitization;
    void /* unknown type, empty encoding */ latencyInference;
    void /* unknown type, empty encoding */ latencyPostprocessing;
    void /* unknown type, empty encoding */ latencyFactualConsistencyClassification;
    void /* unknown type, empty encoding */ inputChunkCount;
    void /* unknown type, empty encoding */ retryCount;
    void /* unknown type, empty encoding */ gmsCallCount;
    void /* unknown type, empty encoding */ isLLMClassifierTriggered;
    void /* unknown type, empty encoding */ languageDetected;
    void /* unknown type, empty encoding */ responseUrgency;
    void /* unknown type, empty encoding */ responseUrgencyFastClassifier;
    void /* unknown type, empty encoding */ responseUrgencyLLMClassifier;
    void /* unknown type, empty encoding */ confidenceBucket;
    void /* unknown type, empty encoding */ latencyEmbeddingExtraction;
    void /* unknown type, empty encoding */ latencyFastClassifier;
    void /* unknown type, empty encoding */ latencyLLMClassifier;
}

@end
