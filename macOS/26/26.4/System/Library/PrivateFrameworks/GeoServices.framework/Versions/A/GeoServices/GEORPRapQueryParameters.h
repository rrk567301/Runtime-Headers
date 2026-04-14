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
- (int)StringAsQuerySource:(id)a0;
- (void)addFeedbackId:(id)a0;
- (void)clearFeedbackIds;
- (id)feedbackIdAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackIdsCount;
- (id)querySourceAsString:(int)a0;

@end
