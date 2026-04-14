@class NSString, GEOMapFeatureTileFinder;

@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest> {
    GEOMapFeatureTileFinder *_tileFinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTileFinder:(id)a0;

@end
