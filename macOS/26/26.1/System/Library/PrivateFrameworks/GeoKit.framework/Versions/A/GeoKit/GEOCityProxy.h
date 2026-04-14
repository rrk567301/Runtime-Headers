@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {
    NSDictionary *infoDictionary;
    GEOCity *_realCity;
}

+ (id)cityProxyWithDumpDictionary:(id)a0;

- (id)country;
- (id)displayName;
- (id)timeZoneName;
- (void)forwardInvocation:(id)a0;
- (id)timeZone;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (id)latitude;
- (void)dealloc;
- (id)longitude;
- (id)name;
- (id)_objectFromInfoDictionaryWithKey:(id)a0;
- (id)displayNameAndCountry;
- (id)displayNameLanguage:(id *)a0;
- (id)displayShortTimeZoneString;
- (id)displayTimeZoneString;
- (id)geonameid;
- (id)initWithDumpDictionary:(id)a0;
- (id)population;
- (id)realCity;
- (id)regionalCode;

@end
