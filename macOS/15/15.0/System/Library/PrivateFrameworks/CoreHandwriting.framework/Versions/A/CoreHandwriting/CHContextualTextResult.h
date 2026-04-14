@class CHTokenizedTextResult, NSString, CHStrokeGroup, CHStrokeGroupRecognitionResult;

@interface CHContextualTextResult : NSObject

@property (retain, nonatomic) CHTokenizedTextResult *textResult;
@property (retain, nonatomic) CHStrokeGroup *strokeGroup;
@property (retain, nonatomic) NSString *terminatingSpecialCharacter;
@property (retain, nonatomic) CHStrokeGroupRecognitionResult *strokeGroupResult;

+ (id)defaultWordTerminationCharacterForLocale:(id)a0;

- (void).cxx_destruct;
- (id)initWithTextResult:(id)a0 terminatingSpecialCharacter:(id)a1 strokeGroup:(id)a2;
- (BOOL)isNonTextCandidateForContextLookup;
- (BOOL)isNonTextCandidateForContextLookupByNonTextStrokesBounds:(id)a0 strokeClassificationResult:(id)a1;

@end
