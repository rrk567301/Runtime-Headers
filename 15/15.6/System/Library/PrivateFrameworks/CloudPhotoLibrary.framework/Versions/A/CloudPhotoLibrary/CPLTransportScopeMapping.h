@class NSMutableDictionary;
@protocol CPLTransportScopeTranslator;

@interface CPLTransportScopeMapping : NSObject {
    NSMutableDictionary *_scopeMapping;
    NSMutableDictionary *_concreteScopeMapping;
}

@property (readonly, nonatomic) id<CPLTransportScopeTranslator> translator;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) char hasStagingScopes;

- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)redactedDescription;
- (char)_addAllTransportScopesForScope:(id)a0 scopes:(id)a1 allowsTentativeTransportScope:(char)a2 useStagingScopeIfNecessary:(char)a3 error:(id *)a4;
- (char)_addTransportScopeForScope:(id)a0 scopes:(id)a1 allowsTentativeTransportScope:(char)a2 useStagingScopeIfNecessary:(char)a3 error:(id *)a4;
- (char)_checkTransportScopeForScopeIdentifier:(id)a0 hasConcreteScope:(char *)a1 error:(id *)a2;
- (void)addConcreteScope:(id)a0 forScope:(id)a1;
- (void)addTransportScope:(id)a0 forScope:(id)a1;
- (char)addTransportScopeForScope:(id)a0 scopes:(id)a1 allowsTentativeTransportScope:(char)a2 useStagingScopeIfNecessary:(char)a3 error:(id *)a4;
- (char)addTransportScopeForScopeIdentifier:(id)a0 scopes:(id)a1 useStagingScopeIfNecessary:(char)a2 error:(id *)a3;
- (id)concreteScopeForScopeWithIdentifier:(id)a0;
- (void)enumerateConcreteScopesWithBlock:(id /* block */)a0;
- (char)hasConcreteScopeForScopeWithIdentifier:(id)a0;
- (id)initWithTranslator:(id)a0;
- (id)scopeForScopeIdentifier:(id)a0;
- (void)updateWithTransportScopeMapping:(id)a0;

@end
