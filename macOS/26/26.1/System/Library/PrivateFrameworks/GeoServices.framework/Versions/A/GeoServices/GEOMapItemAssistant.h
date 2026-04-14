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

- (BOOL)_hasUserRatingScore;
- (id)_place;
- (id)geoAddress;
- (float)_normalizedUserRatingScore;
- (id)_businessURL;
- (id)addressObject;
- (unsigned long long)_muid;
- (BOOL)_hasMUID;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)addressDictionary;
- (id)weatherDisplayName;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasResolvablePartialInformation;
- (struct { double x0; double x1; })coordinate;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isValid;
- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;

@end
