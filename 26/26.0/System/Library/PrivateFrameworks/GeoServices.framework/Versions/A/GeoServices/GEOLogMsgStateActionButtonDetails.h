@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateActionButtonDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_actionButtonDetails;
}

@property (retain, nonatomic) NSMutableArray *actionButtonDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)actionButtonDetailsType;

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
- (id)actionButtonDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionButtonDetailsCount;
- (void)addActionButtonDetails:(id)a0;
- (void)clearActionButtonDetails;

@end
