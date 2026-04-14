@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (int)referenceFrame;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasResultProviderID;
- (BOOL)_isInLinkedPlaceRelationship;
- (unsigned long long)_muid;
- (BOOL)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (id)_styleAttributes;
- (id)initWithLinkedPlace:(id)a0;

@end
