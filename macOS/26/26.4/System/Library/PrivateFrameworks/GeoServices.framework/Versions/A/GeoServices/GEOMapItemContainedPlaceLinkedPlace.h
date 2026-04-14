@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (int)_resultProviderID;
- (id)_styleAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_responseStatusIsIncomplete;
- (id)name;
- (BOOL)_hasResultProviderID;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (BOOL)_hasMUID;
- (BOOL)isValid;
- (int)referenceFrame;
- (void).cxx_destruct;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)description;
- (id)initWithLinkedPlace:(id)a0;

@end
