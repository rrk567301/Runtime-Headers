@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_processName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _appType;
    char _appDarkMode;
    struct { unsigned char has_appType : 1; unsigned char has_appDarkMode : 1; unsigned char read_unknownFields : 1; unsigned char read_appIdentifier : 1; unsigned char read_appMajorVersion : 1; unsigned char read_appMinorVersion : 1; unsigned char read_processName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) char hasAppMajorVersion;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (readonly, nonatomic) char hasAppMinorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (nonatomic) char hasAppDarkMode;
@property (nonatomic) char appDarkMode;
@property (readonly, nonatomic) char hasProcessName;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) char hasAppType;
@property (nonatomic) int appType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (int)StringAsAppType:(id)a0;
- (id)appTypeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
