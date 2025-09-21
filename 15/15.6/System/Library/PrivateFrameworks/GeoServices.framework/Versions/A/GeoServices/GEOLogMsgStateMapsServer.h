@class GEOMapsServerMetadata, PBUnknownFields;

@interface GEOLogMsgStateMapsServer : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapsServerMetadata *_serverMetadata;
}

@property (readonly, nonatomic) char hasServerMetadata;
@property (retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
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
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
