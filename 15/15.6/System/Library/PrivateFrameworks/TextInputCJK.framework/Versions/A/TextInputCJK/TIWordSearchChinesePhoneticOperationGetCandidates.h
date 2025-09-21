@class NSArray;

@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates

@property (readonly, nonatomic) NSArray *disambiguationCandidates;
@property (readonly, nonatomic) unsigned long long selectedDisambiguationCandidateIndex;
@property (readonly, nonatomic) unsigned long long unambiguousSyllableCount;
@property (readonly, nonatomic) unsigned long long disambiguatedSyllablesCount;
@property (readonly, nonatomic) char regenerateDisambiguationCandidates;

- (void).cxx_destruct;
- (id)initWithWordSearch:(id)a0 inputString:(id)a1 keyboardInput:(id)a2 segmentBreakIndex:(unsigned long long)a3 disambiguationCandidates:(id)a4 unambiguousSyllableCount:(unsigned long long)a5 selectedDisambiguationCandidateIndex:(unsigned long long)a6 regenerateDisambiguationCandidates:(char)a7 predictionEnabled:(char)a8 reanalysisMode:(char)a9 target:(id)a10 action:(SEL)a11 geometryModelData:(id)a12 hardwareKeyboardMode:(char)a13 logger:(id)a14;

@end
