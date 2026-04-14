@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (id)name;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (int)referenceFrame;
- (unsigned long long)_muid;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasResultProviderID;
- (int)_resultProviderID;
- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)initWithLinkedPlace:(id)a0;

@end
