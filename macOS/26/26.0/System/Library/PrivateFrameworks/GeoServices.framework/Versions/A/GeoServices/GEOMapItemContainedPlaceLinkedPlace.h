@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (BOOL)_hasResultProviderID;
- (BOOL)_hasMUID;
- (BOOL)isValid;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (id)_styleAttributes;
- (unsigned long long)_muid;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)description;
- (int)referenceFrame;
- (id)name;
- (void).cxx_destruct;
- (id)initWithLinkedPlace:(id)a0;

@end
