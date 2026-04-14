@class CHPatternNetwork;

@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) CHPatternNetwork *patternFST;

- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithPatternFst:(id)a0;

@end
