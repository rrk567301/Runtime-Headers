@class NSString, PGManager, PGGraphNamingProcessor;

@interface PGNamingCMMAnalyzer : NSObject <PGNamingAnalyzer> {
    PGManager *_manager;
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (void)findCMMMatchesFromSharingRecords:(id)a0 graph:(id)a1 withProgressBlock:(id /* block */)a2;
- (id)initWithNamingProcessor:(id)a0;
- (id)initWithNamingProcessor:(id)a0 manager:(id)a1;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;

@end
