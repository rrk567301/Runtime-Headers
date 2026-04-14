@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)_place;
- (BOOL)_hasMUID;
- (BOOL)isValid;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_hasResolvablePartialInformation;
- (id)_styleAttributes;
- (unsigned long long)_muid;
- (int)_venueFeatureType;
- (BOOL)_hasVenueFeatureType;
- (int)referenceFrame;
- (id)name;
- (BOOL)_isTransitDisplayFeature;
- (void).cxx_destruct;
- (id)_venueInfo;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
