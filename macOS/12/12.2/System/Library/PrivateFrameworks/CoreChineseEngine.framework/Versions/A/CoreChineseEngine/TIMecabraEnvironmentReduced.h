@class NSString, NSDictionary;

@interface TIMecabraEnvironmentReduced : NSObject

@property (copy, nonatomic) NSString *leftDocumentContext;
@property (copy, nonatomic) NSString *rightDocumentContext;
@property (nonatomic) int textContentType;
@property (nonatomic) struct __Mecabra { } *mecabra;
@property (nonatomic) struct __MecabraContext { } *mecabraContext;
@property (readonly, nonatomic) NSDictionary *environmentDebuggingInformation;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setAppContext:(id)a0;
- (id)initWithMecabraEngine:(struct __Mecabra { } *)a0 language:(int)a1;
- (BOOL)analyzeString:(id)a0 options:(unsigned long long)a1;
- (BOOL)predictionAnalyzeWithOptions:(unsigned long long)a0 maxNumberOfCandidates:(unsigned long long)a1;
- (void)setGeometryModel:(void *)a0 modelData:(struct __CFArray { } *)a1;
- (void)setShuangpinType:(int)a0;
- (void)acceptInlineCandidates;
- (void)partiallyCommitInlineCandidate:(void *)a0;
- (void)completelyCommitInlineCandidate:(void *)a0;
- (void)revertInlineCandidate;
- (void)adjustEnvironmentDirectly:(long long)a0;
- (void)adjustEnvironmentOnAction:(long long)a0;
- (void)addStringCandidateToContext:(id)a0;
- (void)addPunctuationCandidateToContext:(id)a0;
- (void)declareEndOfSentence;

@end
