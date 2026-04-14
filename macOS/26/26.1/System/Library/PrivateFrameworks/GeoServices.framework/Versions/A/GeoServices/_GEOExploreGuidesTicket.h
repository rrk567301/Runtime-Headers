@class NSString, GEOPDExploreGuidesLookupParameters, GEOMapServiceTraits;

@interface _GEOExploreGuidesTicket : GEOAbstractRequestResponseTicket <GEOMapServiceExploreGuidesTicket> {
    GEOPDExploreGuidesLookupParameters *_exploreGuidesLookupParameters;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (id)initWithRequest:(id)a0 traits:(id)a1 exploreGuidesLookupParameters:(id)a2;

@end
