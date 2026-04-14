@class CHTokenizedTextResult, NSArray, NSIndexSet, CHRecognitionSessionAutoRefineResult;

@interface CHAutoRefineQueryItem : NSObject {
    CHRecognitionSessionAutoRefineResult *_autoRefineResult;
}

@property (readonly, copy, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) NSIndexSet *refinedTokenColumns;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithAutoRefineResult:(id)a0;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;

@end
