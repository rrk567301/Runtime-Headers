@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {
    NSDictionary *infoDictionary;
    GEOCity *_realCity;
}

+ (id)cityProxyWithDumpDictionary:(id)a0;

- (id)latitude;
- (id)country;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)longitude;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)name;
- (id)displayName;
- (id)timeZoneName;
- (id)timeZone;
- (void)dealloc;
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
