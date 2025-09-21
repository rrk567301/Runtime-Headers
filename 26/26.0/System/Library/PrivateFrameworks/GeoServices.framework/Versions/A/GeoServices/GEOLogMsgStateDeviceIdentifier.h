@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_deviceHwIdentifier;
    NSString *_deviceOsVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _deviceDarkMode;
    BOOL _isInternalInstall;
    BOOL _isInternalTool;
    struct { unsigned char has_deviceDarkMode : 1; unsigned char has_isInternalInstall : 1; unsigned char has_isInternalTool : 1; unsigned char read_unknownFields : 1; unsigned char read_deviceHwIdentifier : 1; unsigned char read_deviceOsVersion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDeviceOsVersion;
@property (retain, nonatomic) NSString *deviceOsVersion;
@property (readonly, nonatomic) BOOL hasDeviceHwIdentifier;
@property (retain, nonatomic) NSString *deviceHwIdentifier;
@property (nonatomic) BOOL hasIsInternalTool;
@property (nonatomic) BOOL isInternalTool;
@property (nonatomic) BOOL hasIsInternalInstall;
@property (nonatomic) BOOL isInternalInstall;
@property (nonatomic) BOOL hasDeviceDarkMode;
@property (nonatomic) BOOL deviceDarkMode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
