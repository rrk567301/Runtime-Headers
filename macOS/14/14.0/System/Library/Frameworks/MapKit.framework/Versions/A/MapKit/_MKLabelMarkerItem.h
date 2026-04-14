@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (int)referenceFrame;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasVenueFeatureType;
- (BOOL)_isTransitDisplayFeature;
- (unsigned long long)_muid;
- (id)_place;
- (id)_styleAttributes;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
