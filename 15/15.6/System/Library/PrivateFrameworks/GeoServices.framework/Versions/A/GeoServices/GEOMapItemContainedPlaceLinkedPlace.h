@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (id)description;
- (id)name;
- (char)isValid;
- (void).cxx_destruct;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (int)referenceFrame;
- (char)_hasMUID;
- (char)_hasResolvablePartialInformation;
- (char)_hasResultProviderID;
- (char)_isInLinkedPlaceRelationship;
- (char)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (id)_styleAttributes;
- (id)initWithLinkedPlace:(id)a0;

@end
