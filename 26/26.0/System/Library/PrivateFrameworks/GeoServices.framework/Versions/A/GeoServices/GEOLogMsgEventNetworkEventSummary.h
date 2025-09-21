@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventNetworkEventSummary : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groups;
}

@property (retain, nonatomic) NSMutableArray *groups;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)groupsType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addGroups:(id)a0;
- (void)clearGroups;
- (id)groupsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupsCount;

@end
