@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) char canAddPhotosLocally;
@property (readonly, nonatomic) char canShowPhotosLocally;
@property (readonly, nonatomic) char shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) char supportsReportingIssue;
@property (readonly, nonatomic) char requiresAttributionInPhotoViewerHeader;

- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 poiID:(id)a3;
- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 yelpID:(id)a3;
- (id)urlsForPhotoWithIdentifier:(id)a0;

@end
