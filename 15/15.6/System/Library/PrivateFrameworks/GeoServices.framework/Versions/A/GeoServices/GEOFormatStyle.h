@class NSString, PBUnknownFields;

@interface GEOFormatStyle : PBCodable <GEOServerFormatStyle, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_token;
    int _type;
    struct { unsigned char has_type : 1; } _flags;
}

@property (readonly, nonatomic) long long styleType;
@property (readonly, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
