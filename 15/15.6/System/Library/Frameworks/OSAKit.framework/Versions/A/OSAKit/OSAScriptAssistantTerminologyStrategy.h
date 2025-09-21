@class NSArray;

@interface OSAScriptAssistantTerminologyStrategy : OSAScriptAssistantStrategy {
    NSArray *_terms;
}

- (void)dealloc;
- (id)_terminologyCompletionItemsForTerms:(id)a0;
- (char)getItems:(id *)a0 withInfoString:(id)a1;
- (id)initWithScriptView:(id)a0;

@end
