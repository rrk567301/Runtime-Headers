@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_deviceHwIdentifier;
    NSString *_deviceOsVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _deviceDarkMode;
    char _isInternalInstall;
    char _isInternalTool;
    struct { unsigned char has_deviceDarkMode : 1; unsigned char has_isInternalInstall : 1; unsigned char has_isInternalTool : 1; unsigned char read_unknownFields : 1; unsigned char read_deviceHwIdentifier : 1; unsigned char read_deviceOsVersion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasDeviceOsVersion;
@property (retain, nonatomic) NSString *deviceOsVersion;
@property (readonly, nonatomic) char hasDeviceHwIdentifier;
@property (retain, nonatomic) NSString *deviceHwIdentifier;
@property (nonatomic) char hasIsInternalTool;
@property (nonatomic) char isInternalTool;
@property (nonatomic) char hasIsInternalInstall;
@property (nonatomic) char isInternalInstall;
@property (nonatomic) char hasDeviceDarkMode;
@property (nonatomic) char deviceDarkMode;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
