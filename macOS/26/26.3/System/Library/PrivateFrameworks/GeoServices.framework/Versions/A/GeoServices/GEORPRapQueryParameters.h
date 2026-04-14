@class NSMutableArray, PBUnknownFields;

@interface GEORPRapQueryParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackIds;
    int _querySource;
    struct { unsigned char has_querySource : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *feedbackIds;
@property (nonatomic) BOOL hasQuerySource;
@property (nonatomic) int querySource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)feedbackIdType;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsQuerySource:(id)a0;
- (void)addFeedbackId:(id)a0;
- (void)clearFeedbackIds;
- (id)feedbackIdAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackIdsCount;
- (id)querySourceAsString:(int)a0;

@end
