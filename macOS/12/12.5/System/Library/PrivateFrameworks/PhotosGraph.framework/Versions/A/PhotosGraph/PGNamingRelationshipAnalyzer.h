@class NSString, PGGraphNamingProcessor;

@interface PGNamingRelationshipAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (void)findRelationshipMatchesFromContactIdentifiersByRelationship:(id)a0 graph:(id)a1 withProgressBlock:(id /* block */)a2;

@end
