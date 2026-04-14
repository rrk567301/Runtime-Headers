@class WFDisambiguationCollectionFilter, NSString;

@interface WFAskEachTimeVariable : WFVariable

@property (retain, nonatomic) WFDisambiguationCollectionFilter *collectionFilter;
@property (readonly, nonatomic) NSString *prompt;

- (id)init;
- (id)name;
- (id)icon;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (id)initWithPrompt:(id)a0;
- (BOOL)supportsAggrandizements;
- (id)initWithCollectionFilter:(id)a0;
- (id)initWithPrompt:(id)a0 collectionFilter:(id)a1;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)rewrittenWithStrings:(id)a0;
- (id)userVisiblePrompt;
- (id)userVisibleStringsForUseCase:(unsigned long long)a0;

@end
