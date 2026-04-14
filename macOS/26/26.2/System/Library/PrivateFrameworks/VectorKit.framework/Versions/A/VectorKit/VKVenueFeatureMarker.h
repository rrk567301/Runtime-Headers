@class GEOMapItemIdentifier, NSArray;

@interface VKVenueFeatureMarker : VKMarker {
    BOOL _localize;
}

@property (readonly, nonatomic) unsigned long long businessID;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapIdentifier;
@property (readonly, nonatomic) NSArray *buildings;

- (id)shortName;
- (id)initWithVenue:(const void *)a0 localize:(BOOL)a1;
- (id)name;
- (const void *)venueFeatureMarker;

@end
