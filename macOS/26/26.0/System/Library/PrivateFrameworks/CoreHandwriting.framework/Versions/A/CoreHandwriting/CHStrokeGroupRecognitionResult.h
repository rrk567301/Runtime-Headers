@class NSArray, NSDictionary, CHTokenizedResult, NSString, CHDrawing, CHTokenizedMathResult;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding> {
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSDictionary *_languageFitnessByLocale;
    NSArray *_orderedLocales;
    unsigned long long _processing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *orderedLocales;
@property (retain, nonatomic) CHDrawing *inputDrawing;
@property (readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property (readonly, copy, nonatomic) NSDictionary *languageFitnessByLocale;
@property (readonly, nonatomic) unsigned long long processing;
@property (readonly, copy, nonatomic) CHTokenizedResult *preferredTokenizedResult;
@property (readonly, copy, nonatomic) NSString *preferredTranscription;
@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *recognitionResultsByLocale;
@property (readonly, copy, nonatomic) NSDictionary *errorsByLocale;
@property (readonly, nonatomic) BOOL isCandidateMathGroup;
@property (readonly, copy, nonatomic) CHTokenizedMathResult *mathResult;
@property (readonly, nonatomic) BOOL hasTextResult;

+ (id)filteredResultsByLocale:(id)a0 orderedLocales:(id)a1 usingLanguageFitness:(id)a2 outSortedLocales:(id *)a3;
+ (id)sortedLanguageGroups:(id)a0 usingLanguageFitness:(id)a1;
+ (id)sortedLocales:(id)a0 usingLanguageFitness:(id)a1 useCombinedScore:(BOOL)a2;
+ (id)textTranscriptionsForSortedGroupCluster:(id)a0 recognizedResultsByGroupID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)preferredLocale;
- (BOOL)hasPrincipalLines;
- (id)highConfidenceTextForSessionResult:(id)a0 averageTokenScore:(double *)a1 rejectionRate:(double *)a2 doesContainUnfilteredMultiLocaleResults:(BOOL *)a3 isNonTextCandidateResult:(BOOL *)a4;
- (id)initWithOrderedLocales:(id)a0 resultsByLocale:(id)a1 errorsByLocale:(id)a2 languageFitnessByLocale:(id)a3 mathResult:(id)a4 inputStrokeIdentifiers:(id)a5 processing:(unsigned long long)a6;
- (id)initWithOrderedLocales:(id)a0 resultsByLocale:(id)a1 errorsByLocale:(id)a2 languageFitnessByLocale:(id)a3 mathResult:(id)a4 inputStrokeIdentifiers:(id)a5 processing:(unsigned long long)a6 inputDrawing:(id)a7 inputDrawingCutPoints:(id)a8;
- (struct { double x0; double x1; })languageFitnessForLocale:(id)a0;
- (id)localesSortedByCombinedLanguageFitness:(id)a0;
- (id)localesSortedByRawLanguageFitness:(id)a0;
- (id)mathStrokeGroupRecognitionResultByAppendingStrokeGroupRecognitionResult:(id)a0 wrapTextResult:(BOOL)a1;
- (id)textStrokeGroupRecognitionResultByAppendingStrokeGroupRecognitionResult:(id)a0 shouldForceSpace:(BOOL)a1;

@end
