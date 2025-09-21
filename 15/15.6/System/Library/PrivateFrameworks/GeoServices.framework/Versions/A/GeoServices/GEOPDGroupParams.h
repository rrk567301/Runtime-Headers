@class GEOPDGroupData, PBUnknownFields;

@interface GEOPDGroupParams : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDGroupData *_groupData;
    int _actionDataItemIndex;
    int _groupButtonType;
    struct { unsigned char has_actionDataItemIndex : 1; unsigned char has_groupButtonType : 1; } _flags;
}

@property (nonatomic) char hasGroupButtonType;
@property (nonatomic) int groupButtonType;
@property (nonatomic) char hasActionDataItemIndex;
@property (nonatomic) int actionDataItemIndex;
@property (readonly, nonatomic) char hasGroupData;
@property (retain, nonatomic) GEOPDGroupData *groupData;
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
- (int)StringAsGroupButtonType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)groupButtonTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
