@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _concatenatingFormatStringsSupported;
    char _styleSupported;
    char _timestampFormatPatternSupported;
    struct { unsigned char has_concatenatingFormatStringsSupported : 1; unsigned char has_styleSupported : 1; unsigned char has_timestampFormatPatternSupported : 1; } _flags;
}

@property (nonatomic) char hasConcatenatingFormatStringsSupported;
@property (nonatomic) char concatenatingFormatStringsSupported;
@property (nonatomic) char hasTimestampFormatPatternSupported;
@property (nonatomic) char timestampFormatPatternSupported;
@property (nonatomic) char hasStyleSupported;
@property (nonatomic) char styleSupported;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
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
