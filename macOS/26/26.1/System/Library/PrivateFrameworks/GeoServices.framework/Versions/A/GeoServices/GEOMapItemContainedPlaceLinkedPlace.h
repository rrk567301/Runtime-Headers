@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (id)_identifier;
- (BOOL)_hasResultProviderID;
- (int)referenceFrame;
- (unsigned long long)_muid;
- (int)_resultProviderID;
- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasResolvablePartialInformation;
- (struct { double x0; double x1; })coordinate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)name;
- (BOOL)isValid;
- (id)initWithLinkedPlace:(id)a0;

@end
