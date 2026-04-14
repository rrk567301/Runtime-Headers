@class NSString, NSArray, GEOGuideLocationSuggestionResults, GEOCollectionSuggestionResult, GEOPublisherSuggestionResult;

@interface GEOMapsSearchHomeSection : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long sectionType;
@property (readonly, nonatomic) NSArray *searchCategories;
@property (readonly, nonatomic) GEOCollectionSuggestionResult *collectionSuggestions;
@property (readonly, nonatomic) GEOPublisherSuggestionResult *publisherSuggestions;
@property (readonly, nonatomic) GEOGuideLocationSuggestionResults *guideLocationSuggestsions;

- (void).cxx_destruct;
- (id)description;
- (BOOL)dataModelIsValid:(id)a0;
- (id)initWithMapsSearchHomeSection:(id)a0 mapsResults:(id)a1;

@end
