@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (id)_identifier;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_responseStatusIsIncomplete;
- (unsigned long long)_muid;
- (BOOL)_hasResolvablePartialInformation;
- (int)_resultProviderID;
- (BOOL)_hasResultProviderID;
- (int)referenceFrame;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)initWithLinkedPlace:(id)a0;

@end
