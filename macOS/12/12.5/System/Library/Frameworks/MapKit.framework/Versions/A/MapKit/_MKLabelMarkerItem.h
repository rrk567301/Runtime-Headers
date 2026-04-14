@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)name;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (int)referenceFrame;
- (unsigned long long)_muid;
- (id)_place;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_isTransitDisplayFeature;
- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (BOOL)_hasVenueFeatureType;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
