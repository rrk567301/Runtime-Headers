@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {
    NSDictionary *infoDictionary;
    GEOCity *_realCity;
}

+ (id)cityProxyWithDumpDictionary:(id)a0;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)timeZone;
- (id)displayName;
- (id)latitude;
- (id)longitude;
- (id)country;
- (id)timeZoneName;
- (id)geonameid;
- (id)regionalCode;
- (id)population;
- (id)displayNameAndCountry;
- (id)displayTimeZoneString;
- (id)displayShortTimeZoneString;
- (id)initWithDumpDictionary:(id)a0;
- (id)realCity;
- (id)_objectFromInfoDictionaryWithKey:(id)a0;
- (id)displayNameLanguage:(id *)a0;

@end
