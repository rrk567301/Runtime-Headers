@class NSDictionary, SKGConfig, SKGGraph;

@interface SpotlightGraph : NSObject {
    NSDictionary *_options;
    SKGConfig *_config;
    SKGGraph *_graph;
    struct _SIGeneralTrie { } *_peopleScores;
}

- (id)domains;
- (void)dealloc;
- (long long)edgeCount;
- (BOOL)isLoaded;
- (long long)personCount;
- (long long)nodeCount;
- (id)initWithConfig:(id)a0;
- (BOOL)available;
- (void).cxx_destruct;
- (long long)emailCount;
- (long long)nameCount;
- (BOOL)hasPeople;
- (BOOL)addItem:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)addPerson:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)analyzePeopleWithCancelBlock:(id /* block */)a0;
- (id)cachedPeopleScoresPath;
- (BOOL)clearWithCancelBlock:(id /* block */)a0;
- (BOOL)closeWithCancelBlock:(id /* block */)a0;
- (BOOL)commitWithCancelBlock:(id /* block */)a0;
- (BOOL)containsReference:(id)a0 personaIdentifier:(id)a1 protectionClass:(id)a2 domainIdentifier:(id)a3;
- (BOOL)deleteDomainIdentifier:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)deleteDomainIdentifier:(id)a0 personaIdentifier:(id)a1 cancelBlock:(id /* block */)a2;
- (BOOL)deleteEntitiesWithCancelBlock:(id /* block */)a0;
- (BOOL)deletePeopleWithCancelBlock:(id /* block */)a0;
- (BOOL)deleteReferences:(id)a0 domainIdentifier:(id)a1 cancelBlock:(id /* block */)a2;
- (BOOL)deleteReferences:(id)a0 personaIdentifier:(id)a1 protectionClass:(id)a2 domainIdentifier:(id)a3 cancelBlock:(id /* block */)a4;
- (long long)domainCount;
- (BOOL)enumeratePeopleUsingBlock:(id /* block */)a0;
- (BOOL)findAllContactInfoForNode:(id)a0 info:(id)a1 reference:(id)a2 foundUser:(BOOL *)a3;
- (BOOL)flushWithCancelBlock:(id /* block */)a0;
- (BOOL)generatePeopleUsingBlock:(id /* block */)a0;
- (id)nameNodeFromName:(id)a0 nameComponents:(id)a1 reference:(id)a2 domain:(id)a3 nodes:(id)a4 edges:(id)a5 isOwner:(BOOL)a6;
- (BOOL)openWithCancelBlock:(id /* block */)a0;
- (BOOL)peopleAnalyzeWithCancelBlock:(id /* block */)a0;
- (BOOL)peopleScoreWithCancelBlock:(id /* block */)a0;
- (void)peopleUpdateFromItem:(id)a0 reference:(id)a1 domain:(id)a2 nodes:(id)a3 edges:(id)a4;
- (BOOL)peopleUpdateInfo:(id)a0 attributeKey:(id)a1 attribute:(id)a2 forNode:(id)a3 person:(id)a4 score:(id)a5 rank:(id)a6 bestCount:(unsigned long long *)a7;
- (BOOL)peopleUpdateNetwork:(void *)a0 sourceNodeId:(unsigned int)a1 nodes:(id)a2;
- (long long)personaCountForDomain:(id)a0;
- (long long)phoneCount;
- (id)primaryNodesForPerson:(id)a0 reference:(id)a1 domain:(id)a2 nodes:(id)a3 edges:(id)a4 isOwner:(BOOL)a5;
- (BOOL)pruneWithCancelBlock:(id /* block */)a0;
- (long long)referenceCountForDomain:(id)a0;
- (long long)referenceCountForDomain:(id)a0 personaIdentifier:(id)a1;
- (id)referenceIdentifierWithReference:(id)a0 domain:(id)a1 persona:(id)a2 protectionClass:(id)a3;
- (BOOL)scorePeopleWithCancelBlock:(id /* block */)a0;

@end
