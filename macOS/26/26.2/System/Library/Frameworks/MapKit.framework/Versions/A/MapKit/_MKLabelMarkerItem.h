@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (BOOL)_hasResolvablePartialInformation;
- (id)_place;
- (id)_identifier;
- (id)_styleAttributes;
- (int)referenceFrame;
- (BOOL)_hasMUID;
- (unsigned long long)_muid;
- (struct { double x0; double x1; })coordinate;
- (void).cxx_destruct;
- (BOOL)_isTransitDisplayFeature;
- (BOOL)isValid;
- (int)_venueFeatureType;
- (id)name;
- (id)_venueInfo;
- (BOOL)_hasVenueFeatureType;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
