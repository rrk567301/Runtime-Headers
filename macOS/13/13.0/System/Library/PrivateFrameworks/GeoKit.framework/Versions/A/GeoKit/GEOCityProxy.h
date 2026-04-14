@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {
    NSDictionary *infoDictionary;
    GEOCity *_realCity;
}

+ (id)cityProxyWithDumpDictionary:(id)a0;

- (void)dealloc;
- (id)name;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)timeZone;
- (id)displayName;
- (id)country;
- (id)latitude;
- (id)longitude;
- (id)timeZoneName;
- (id)regionalCode;
- (id)displayNameAndCountry;
- (id)displayTimeZoneString;
- (id)displayShortTimeZoneString;
- (id)geonameid;
- (id)population;
- (id)initWithDumpDictionary:(id)a0;
- (id)realCity;
- (id)_objectFromInfoDictionaryWithKey:(id)a0;
- (id)displayNameLanguage:(id *)a0;

@end
