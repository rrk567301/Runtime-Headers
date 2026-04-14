@interface GEOLogMsgStateDeviceSettings : PBCodable <NSCopying> {
    BOOL _deviceDarkMode;
    BOOL _supportsAdvancedMap;
    struct { unsigned char has_deviceDarkMode : 1; unsigned char has_supportsAdvancedMap : 1; } _flags;
}

@property (nonatomic) BOOL hasDeviceDarkMode;
@property (nonatomic) BOOL deviceDarkMode;
@property (nonatomic) BOOL hasSupportsAdvancedMap;
@property (nonatomic) BOOL supportsAdvancedMap;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;

@end
