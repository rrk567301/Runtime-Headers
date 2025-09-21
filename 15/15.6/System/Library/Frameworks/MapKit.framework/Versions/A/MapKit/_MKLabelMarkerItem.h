@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)name;
- (char)isValid;
- (void).cxx_destruct;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (int)referenceFrame;
- (char)_hasMUID;
- (char)_hasResolvablePartialInformation;
- (char)_hasVenueFeatureType;
- (char)_isTransitDisplayFeature;
- (id)_place;
- (id)_styleAttributes;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
