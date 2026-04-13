@class VKCImageAnalysisResult, NSString, VKFeedbackProvider;

@interface VKImageAnalysis : NSObject <NSSecureCoding> {
    VKFeedbackProvider *_feedbackProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VKCImageAnalysisResult *imageAnalysisResult;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) VKFeedbackProvider *feedbackProvider;
@property (readonly, nonatomic) int analysisRequestID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allLines;
- (id)textDataDetectors;
- (BOOL)hasResultsForAnalysisTypes:(unsigned long long)a0;
- (unsigned long long)countOfDataDetectorsWithTypes:(unsigned long long)a0;
- (BOOL)writeSecureCodedArchiveToURL:(id)a0 error:(id *)a1;
- (id)initWithAnalysisResult:(id)a0;
- (BOOL)_hasVisualSearchElements;
- (id)analysisByReplacingTypes:(unsigned long long)a0 fromAnalysis:(id)a1;

@end
