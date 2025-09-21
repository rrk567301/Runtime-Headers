@class NSArray, CHTextInputQuery;
@protocol CHRecognitionSessionTextInputTaskDelegate;

@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask

@property (nonatomic) id<CHRecognitionSessionTextInputTaskDelegate> delegate;
@property (readonly, nonatomic) NSArray *initialTextInputTargets;
@property (retain, nonatomic) CHTextInputQuery *activeTextInputQuery;

- (void).cxx_destruct;
- (id)clutterFilter;
- (id)initWithLocales:(id)a0 strokeProvider:(id)a1 initialTextInputTargets:(id)a2 inputResult:(id)a3 recognitionEnvironment:(long long)a4 calculateDocumentProvider:(id)a5;
- (id)initWithSessionMode:(long long)a0 locales:(id)a1 preferredLocales:(id)a2 strokeProvider:(id)a3 calculateDocumentProvider:(id)a4 inputResult:(id)a5 recognitionQOSClass:(unsigned int)a6 recognitionEnvironment:(long long)a7 isHighResponsivenessTask:(BOOL)a8 strokeGroupingRequirement:(long long)a9 principalLineRequirement:(long long)a10 subjectStrokeIdentifiers:(id)a11 recognitionOptions:(id)a12 partialResultBlock:(id /* block */)a13 wantsAutoRefine:(BOOL)a14;
- (id)newDocumentLayoutAnalysisManager;
- (id)newGroupingManager;
- (id)newGroupingPostProcessingManagerWithGroupingManager:(id)a0;
- (id)newStrokeClassifier;
- (id)recognitionResultsForGroupingResult:(id)a0 groupingManager:(id)a1 strokeGroupsToProcess:(id)a2 strokeClassificationResult:(id)a3 shouldUpdateRecognitionResultsPerLocale:(BOOL)a4 strokeGroupReplacements:(id *)a5;
- (id)textCorrectionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;

@end
