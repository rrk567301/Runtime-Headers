@class NSArray, CHTextInputQuery;
@protocol CHRecognitionSessionTextInputTaskDelegate;

@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask

@property (nonatomic) id<CHRecognitionSessionTextInputTaskDelegate> delegate;
@property (readonly, nonatomic) NSArray *initialTextInputTargets;
@property (retain, nonatomic) CHTextInputQuery *activeTextInputQuery;

- (void).cxx_destruct;
- (id)clutterFilter;
- (id)initWithLocales:(id)a0 strokeProvider:(id)a1 initialTextInputTargets:(id)a2 inputResult:(id)a3 recognitionEnvironment:(long long)a4;
- (id)initWithSessionMode:(long long)a0 locales:(id)a1 preferredLocales:(id)a2 strokeProvider:(id)a3 inputResult:(id)a4 recognitionQOSClass:(unsigned int)a5 recognitionEnvironment:(long long)a6 isHighResponsivenessTask:(BOOL)a7 strokeClassificationModel:(id)a8 strokeGroupingModel:(id)a9 strokeGroupingRequirement:(long long)a10 subjectStrokeIdentifiers:(id)a11 recognitionOptions:(id)a12 disableMathTextSwapping:(BOOL)a13 partialResultBlock:(id /* block */)a14;
- (id)newGroupingManager;
- (id)newGroupingPostProcessingManagerWithGroupingManager:(id)a0;
- (id)newStrokeClassifier;
- (id)recognitionResultsForGroupingResult:(id)a0 groupingManager:(id)a1 strokeGroupsToProcess:(id)a2 strokeClassificationResult:(id)a3 strokeGroupReplacements:(id *)a4;
- (id)textCorrectionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;

@end
