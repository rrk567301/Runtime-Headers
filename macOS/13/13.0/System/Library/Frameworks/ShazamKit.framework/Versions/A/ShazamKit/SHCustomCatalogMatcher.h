@class MRE, NSString, SHCustomCatalog;
@protocol SHMatcherDelegate;

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>

@property (retain) MRE *mre;
@property (retain) SHCustomCatalog *customCatalog;
@property (weak) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)startRecognitionForRequest:(id)a0;
- (id)initWithCustomCatalog:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;
- (void)buildMRE;
- (id)MRESignaturesFromMatches:(id)a0;
- (id)mediaItemsFromTrackID:(unsigned long long)a0 offset:(id)a1 timeSkew:(id)a2 frequencySkew:(id)a3 score:(id)a4 audioStartDate:(id)a5;

@end
