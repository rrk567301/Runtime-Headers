@class GEOAddressObject, NSString, NSDictionary, GEOLocation, NSURL, GEOPlace;

@interface GEOMapItemAssistant : GEOBaseMapItem {
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (id)_businessURL;
- (id)_place;
- (float)_normalizedUserRatingScore;
- (BOOL)_hasMUID;
- (id)addressDictionary;
- (BOOL)isValid;
- (id)addressObject;
- (id)geoAddress;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasUserRatingScore;
- (BOOL)_responseStatusIsIncomplete;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)weatherDisplayName;
- (unsigned long long)_muid;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;

@end
