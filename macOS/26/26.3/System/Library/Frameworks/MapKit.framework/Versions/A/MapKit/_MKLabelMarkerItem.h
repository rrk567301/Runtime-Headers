@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)_place;
- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (BOOL)_hasResolvablePartialInformation;
- (int)referenceFrame;
- (id)_venueInfo;
- (id)name;
- (BOOL)_isTransitDisplayFeature;
- (void).cxx_destruct;
- (BOOL)_hasVenueFeatureType;
- (int)_venueFeatureType;
- (BOOL)isValid;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
