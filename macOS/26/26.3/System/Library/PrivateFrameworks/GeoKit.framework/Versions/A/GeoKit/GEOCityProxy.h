@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {
    NSDictionary *infoDictionary;
    GEOCity *_realCity;
}

+ (id)cityProxyWithDumpDictionary:(id)a0;

- (id)displayName;
- (id)latitude;
- (id)longitude;
- (id)description;
- (id)timeZoneName;
- (id)name;
- (id)timeZone;
- (id)country;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
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
