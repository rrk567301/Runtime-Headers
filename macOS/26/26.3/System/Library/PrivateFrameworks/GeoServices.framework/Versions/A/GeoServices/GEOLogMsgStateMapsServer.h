@class GEOMapsServerMetadata, PBUnknownFields;

@interface GEOLogMsgStateMapsServer : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapsServerMetadata *_serverMetadata;
}

@property (readonly, nonatomic) BOOL hasServerMetadata;
@property (retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
