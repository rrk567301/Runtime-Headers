@class NSString, PBUnknownFields;

@interface GEOABConfigValue : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    NSString *_stringValue;
    char _boolValue;
    struct { unsigned char has_doubleValue : 1; unsigned char has_intValue : 1; unsigned char has_boolValue : 1; } _flags;
}

@property (nonatomic) char hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
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
