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
- (float)_normalizedUserRatingScore;
- (id)_place;
- (BOOL)_hasResolvablePartialInformation;
- (id)addressDictionary;
- (BOOL)_responseStatusIsIncomplete;
- (id)_businessURL;
- (id)name;
- (id)addressObject;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)weatherDisplayName;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (id)geoAddress;
- (BOOL)_hasMUID;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;

@end
