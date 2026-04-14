@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateActionButtonDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_actionButtonDetails;
}

@property (retain, nonatomic) NSMutableArray *actionButtonDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)actionButtonDetailsType;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (id)actionButtonDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionButtonDetailsCount;
- (void)addActionButtonDetails:(id)a0;
- (void)clearActionButtonDetails;

@end
