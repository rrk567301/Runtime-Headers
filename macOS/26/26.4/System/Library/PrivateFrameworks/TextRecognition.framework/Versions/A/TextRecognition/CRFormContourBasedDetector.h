@class CRFormAnalyzerConfiguration;

@interface CRFormContourBasedDetector : NSObject

@property (readonly) CRFormAnalyzerConfiguration *configuration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)detectFormFieldsInImage:(id)a0;

@end
