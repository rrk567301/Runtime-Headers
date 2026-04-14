@class NSString, PGGraphNamingProcessor;

@interface PGNamingBiologicalSexAnalyzer : NSObject <PGNamingAnalyzer> {
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
- (unsigned long long)sexMatchBetweenPersonBiologicalSex:(unsigned long long)a0 andContactBiologicalSex:(unsigned long long)a1;

@end
