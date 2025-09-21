@class NSMutableArray, PBUnknownFields;

@interface GEOPDSSessionUserActionMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_userActionMetadataElements;
}

@property (retain, nonatomic) NSMutableArray *userActionMetadataElements;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)userActionMetadataElementType;

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
- (void)clearUserActionMetadataElements;
- (unsigned long long)userActionMetadataElementsCount;
- (void)addUserActionMetadataElement:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)userActionMetadataElementAtIndex:(unsigned long long)a0;

@end
