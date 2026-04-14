@class NSString, PGGraphNamingProcessor;

@interface PGNamingAddressAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (void)findAddressMatchesFromHomeAddressesByContactIdentifier:(id)a0 momentNodesByAddressNode:(id)a1 withProgressBlock:(id /* block */)a2;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;

@end
