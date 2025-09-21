@class PBDataReader, NSString, GEORPUserCredentials, NSData, GEOLocation, NSMutableArray, GEORPDebugSettings;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_countryCode;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_countryCode : 1; unsigned char read_debugSettings : 1; unsigned char read_devicePushToken : 1; unsigned char read_hwMachine : 1; unsigned char read_inputLanguage : 1; unsigned char read_osRelease : 1; unsigned char read_requestElements : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char read_userLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *requestElements;
@property (readonly, nonatomic) char hasHwMachine;
@property (retain, nonatomic) NSString *hwMachine;
@property (readonly, nonatomic) char hasOsRelease;
@property (retain, nonatomic) NSString *osRelease;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) char hasInputLanguage;
@property (retain, nonatomic) NSString *inputLanguage;
@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) char hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (readonly, nonatomic) char hasUserLocation;
@property (retain, nonatomic) GEOLocation *userLocation;
@property (readonly, nonatomic) char hasDebugSettings;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;

+ (char)isValid:(id)a0;
+ (Class)requestElementType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addRequestElement:(id)a0;
- (void)clearRequestElements;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)requestElementAtIndex:(unsigned long long)a0;
- (unsigned long long)requestElementsCount;

@end
