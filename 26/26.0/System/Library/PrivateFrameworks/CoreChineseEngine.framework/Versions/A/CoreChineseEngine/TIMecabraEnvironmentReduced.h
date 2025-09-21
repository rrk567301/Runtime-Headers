@class NSString, NSDictionary;

@interface TIMecabraEnvironmentReduced : NSObject

@property (copy, nonatomic) NSString *leftDocumentContext;
@property (copy, nonatomic) NSString *rightDocumentContext;
@property (nonatomic) int textContentType;
@property (nonatomic) struct __Mecabra { } *mecabra;
@property (nonatomic) struct __MecabraContext { } *mecabraContext;
@property (readonly, nonatomic) NSDictionary *environmentDebuggingInformation;

+ (id)getWordFromAnalysisStringOf:(void *)a0 atIndex:(unsigned long long)a1;
+ (id)getWordFromSurfaceOf:(void *)a0 atIndex:(unsigned long long)a1;
+ (void)loadMobileAssetContentsForInputModes:(id)a0 assetContentTypes:(id)a1 inMecabra:(struct __Mecabra { } *)a2 onQueue:(id)a3;
+ (void)loadMobileAssetContentsForInputModes:(id)a0 inMecabra:(struct __Mecabra { } *)a1 onQueue:(id)a2;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForCHRecognizer:(id)a0 inputModes:(id)a1 onQueue:(id)a2 oldMobileAssetChangeListener:(id)a3;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(struct __Mecabra { } *)a0 inputModes:(id)a1 onQueue:(id)a2 oldMobileAssetChangeListener:(id)a3;
+ (void)removeMobileAssetListener:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setAppContext:(id)a0;
- (id)initWithMecabraEngine:(struct __Mecabra { } *)a0 language:(int)a1;
- (void)partiallyCommitInlineCandidate:(void *)a0;
- (void)acceptInlineCandidates;
- (void)addPunctuationCandidateToContext:(id)a0;
- (void)addStringCandidateToContext:(id)a0;
- (void)adjustEnvironmentDirectly:(long long)a0;
- (void)adjustEnvironmentOnAction:(long long)a0;
- (BOOL)analyzeString:(id)a0 options:(unsigned long long)a1;
- (void)completelyCommitInlineCandidate:(void *)a0;
- (void)declareEndOfSentence;
- (BOOL)predictionAnalyzeWithOptions:(unsigned long long)a0 maxNumberOfCandidates:(unsigned long long)a1;
- (void)revertInlineCandidate;
- (void)setGeometryModel:(void *)a0 modelData:(struct __CFArray { } *)a1;
- (void)setInTypeToSiriMode:(BOOL)a0;
- (void)setShuangpinType:(int)a0;

@end
