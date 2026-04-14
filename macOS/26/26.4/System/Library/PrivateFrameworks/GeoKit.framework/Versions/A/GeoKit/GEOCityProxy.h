@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {
    NSDictionary *infoDictionary;
    GEOCity *_realCity;
}

+ (id)cityProxyWithDumpDictionary:(id)a0;

- (id)latitude;
- (id)name;
- (id)displayName;
- (id)longitude;
- (id)country;
- (void)forwardInvocation:(id)a0;
- (id)timeZone;
- (id)timeZoneName;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
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
