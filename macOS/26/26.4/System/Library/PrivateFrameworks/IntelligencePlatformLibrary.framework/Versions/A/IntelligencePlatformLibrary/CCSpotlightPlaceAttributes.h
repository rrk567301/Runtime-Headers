@class NSString, NSDate;

@interface CCSpotlightPlaceAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_GPSDateStamp;
    double _raw_GPSDateStamp;
}

@property (readonly, nonatomic) double altitude;
@property (nonatomic) BOOL hasAltitude;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *GPSAreaInformation;
@property (readonly, nonatomic) double GPSDOP;
@property (nonatomic) BOOL hasGPSDOP;
@property (readonly, nonatomic) NSDate *GPSDateStamp;
@property (readonly, nonatomic) double GPSDestBearing;
@property (nonatomic) BOOL hasGPSDestBearing;
@property (readonly, nonatomic) double GPSDestDistance;
@property (nonatomic) BOOL hasGPSDestDistance;
@property (readonly, nonatomic) double GPSDestLatitude;
@property (nonatomic) BOOL hasGPSDestLatitude;
@property (readonly, nonatomic) double GPSDestLongitude;
@property (nonatomic) BOOL hasGPSDestLongitude;
@property (readonly, nonatomic) double GPSDifferental;
@property (nonatomic) BOOL hasGPSDifferental;
@property (readonly, nonatomic) NSString *GPSMapDatum;
@property (readonly, nonatomic) NSString *GPSMeasureMode;
@property (readonly, nonatomic) NSString *GPSProcessingMethod;
@property (readonly, nonatomic) NSString *GPSStatus;
@property (readonly, nonatomic) double GPSTrack;
@property (nonatomic) BOOL hasGPSTrack;
@property (readonly, nonatomic) NSString *headline;
@property (readonly, nonatomic) double imageDirection;
@property (nonatomic) BOOL hasImageDirection;
@property (readonly, nonatomic) NSString *instructions;
@property (readonly, nonatomic) double latitude;
@property (nonatomic) BOOL hasLatitude;
@property (readonly, nonatomic) double longitude;
@property (nonatomic) BOOL hasLongitude;
@property (readonly, nonatomic) NSString *namedLocation;
@property (readonly, nonatomic) double speed;
@property (nonatomic) BOOL hasSpeed;
@property (readonly, nonatomic) NSString *stateOrProvince;
@property (readonly, nonatomic) double timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) NSString *fullyFormattedAddress;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *subThoroughfare;
@property (readonly, nonatomic) NSString *thoroughfare;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)GPSDateStamp;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithAltitude:(id)a0 city:(id)a1 country:(id)a2 GPSAreaInformation:(id)a3 GPSDOP:(id)a4 GPSDateStamp:(id)a5 GPSDestBearing:(id)a6 GPSDestDistance:(id)a7 GPSDestLatitude:(id)a8 GPSDestLongitude:(id)a9 GPSDifferental:(id)a10 GPSMapDatum:(id)a11 GPSMeasureMode:(id)a12 GPSProcessingMethod:(id)a13 GPSStatus:(id)a14 GPSTrack:(id)a15 headline:(id)a16 imageDirection:(id)a17 instructions:(id)a18 latitude:(id)a19 longitude:(id)a20 namedLocation:(id)a21 speed:(id)a22 stateOrProvince:(id)a23 timestamp:(id)a24 fullyFormattedAddress:(id)a25 postalCode:(id)a26 subThoroughfare:(id)a27 thoroughfare:(id)a28 error:(id *)a29;

@end
