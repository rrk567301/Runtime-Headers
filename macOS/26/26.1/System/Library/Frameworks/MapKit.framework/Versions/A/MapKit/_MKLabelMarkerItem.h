@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)_identifier;
- (id)_place;
- (int)referenceFrame;
- (unsigned long long)_muid;
- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasVenueFeatureType;
- (struct { double x0; double x1; })coordinate;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (BOOL)_isTransitDisplayFeature;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isValid;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
