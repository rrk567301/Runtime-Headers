@class GEOExploreGuides, NSString, NSURL, GEOExploreGuidesLookupResult;

@interface MKExploreGuidesResponse : NSObject {
    GEOExploreGuidesLookupResult *_exploreGuidesLookupResult;
}

@property (readonly, copy, nonatomic) GEOExploreGuides *exploreGuides;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *imageTemplateURL;
@property (readonly, nonatomic) NSURL *punchInURL;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExploreGuidesLookupResult:(id)a0;

@end
