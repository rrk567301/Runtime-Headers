@class GEOExploreGuides, NSString, NSURL, GEOPDExploreGuidesLookupParameters, GEOPDExplorePlace, GEOPDExploreGuides;

@interface GEOExploreGuidesLookupResult : NSObject {
    GEOPDExploreGuidesLookupParameters *_exploreGuidesLookupParameters;
    GEOPDExplorePlace *_explorePlace;
    GEOPDExploreGuides *_pdExploreGuides;
    int _punchoutType;
    int _searchProviderID;
    unsigned long long _searchUID;
}

@property (readonly, copy, nonatomic) GEOExploreGuides *exploreGuides;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *imageTemplateURL;
@property (readonly, nonatomic) NSURL *punchInURL;

- (void).cxx_destruct;
- (id)initWithExploreGuidesLookupResult:(id)a0 place:(id)a1 exploreGuidesLookupParameters:(id)a2;
- (long long)punchoutTypeForPDPunchoutType:(int)a0;

@end
