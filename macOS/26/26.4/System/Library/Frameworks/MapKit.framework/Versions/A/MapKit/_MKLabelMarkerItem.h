@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)_place;
- (id)_styleAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (id)name;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (BOOL)_hasMUID;
- (BOOL)isValid;
- (int)referenceFrame;
- (int)_venueFeatureType;
- (BOOL)_hasVenueFeatureType;
- (void).cxx_destruct;
- (BOOL)_isTransitDisplayFeature;
- (id)_venueInfo;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
