@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (BOOL)_hasResolvablePartialInformation;
- (int)_resultProviderID;
- (id)_identifier;
- (id)_styleAttributes;
- (BOOL)_responseStatusIsIncomplete;
- (int)referenceFrame;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasMUID;
- (unsigned long long)_muid;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_isInLinkedPlaceRelationship;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)description;
- (id)name;
- (id)initWithLinkedPlace:(id)a0;

@end
