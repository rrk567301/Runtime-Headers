@class NSArray, GEOMapItemPhotosAttribution;

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution {
    GEOMapItemPhotosAttribution *_geoPhotosAttribution;
}

@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) char shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) char shouldHandlePhotosLocally;
@property (readonly, nonatomic) char shouldAddPhotosLocally;
@property (readonly, nonatomic) char supportsReportingIssue;
@property (readonly, nonatomic, getter=isUserSubmitted) char userSubmitted;
@property (readonly, nonatomic) char isBusinessOwned;
@property (readonly, nonatomic) char requiresAttributionInPhotoViewerHeader;

- (void).cxx_destruct;
- (id)urlsForPhotoWithIdentifier:(id)a0;
- (id)initWithGEOMapItemAttribution:(id)a0;

@end
