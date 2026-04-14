@interface IKMetadataHandler : NSObject

+ (id)sharedMetadataHandler;

- (id)fractionString:(id)a0;
- (void)forInfoKey:(id)a0 addKey:(id)a1 fromDictionary:(id)a2 toArray:(id)a3;
- (id)formatArrayValue:(id)a0 forKey:(id)a1;
- (void)formatDictionaryValue:(id)a0 forKey:(id)a1 localizedKey:(id)a2 toArray:(id)a3;
- (void)formatNestedDictionary:(id)a0 withIndent:(id)a1 toArray:(id)a2;
- (id)formatNumberValue:(id)a0;
- (id)formatStringValue:(id)a0;
- (id)handleColorSpace:(id)a0 infoStr:(id)a1 key:(id)a2;
- (id)handleExifExposureTime:(id)a0;
- (id)handleExifShutterSpeedValue:(id)a0;
- (id)handleGPSAltitude:(id)a0;
- (id)handleGPSDateStamp:(id)a0;
- (id)handleGPSKey:(id)a0 data:(id)a1 metaData:(id)a2;
- (id)handleGPSLatitude:(id)a0 metaData:(id)a1;
- (id)handleGPSLongitude:(id)a0 metaData:(id)a1;
- (id)handleGPSSatellites:(id)a0;
- (id)handleGPSTimeStamp:(id)a0;
- (void)handleIPTCCaptionAbstract:(id)a0 localizedKey:(id)a1 toArray:(id)a2;
- (id)handleIPTCContributor:(id)a0;
- (void)handleIPTCCreatorContactInfo:(id)a0 toArray:(id)a1;
- (id)handleIPTCDateTime:(id)a0 format:(id)a1 useUTC:(BOOL)a2;
- (id)handleIPTCDigitalSourceType:(id)a0;
- (id)handleIPTCKey:(id)a0 data:(id)a1 array:(id)a2 localizedKey:(id)a3;
- (id)handleISOSpeedRatings:(id)a0;
- (void)handleRegionsDict:(id)a0 localizedKey:(id)a1 toArray:(id)a2;
- (id)handleVersionStrings:(id)a0;
- (id)localizedArrayValues:(id)a0;
- (id)localizedDate:(id)a0 format:(id)a1;
- (id)localizedDateTime:(id)a0;
- (id)localizedTime:(id)a0 format:(id)a1 useUTC:(BOOL)a2;
- (id)localizedVersionString:(id)a0;
- (id)processMetaData:(id)a0;
- (id)processSubInfo:(id)a0 forKey:(id)a1;
- (id)stringForGPSValue:(double)a0 isLongitude:(BOOL)a1;

@end
