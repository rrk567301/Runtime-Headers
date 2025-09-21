@class NSString, NSData, NSMutableArray;

@interface SIRINLUEXTERNALCDM_PLANNERCdmPlannerResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlanText;
@property (retain, nonatomic) NSString *planText;
@property (readonly, nonatomic) BOOL hasGeneratedTranscriptEventsJson;
@property (retain, nonatomic) NSData *generatedTranscriptEventsJson;
@property (retain, nonatomic) NSMutableArray *transcriptEvents;

+ (Class)transcriptEventsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTranscriptEvents:(id)a0;
- (void)clearTranscriptEvents;
- (id)transcriptEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)transcriptEventsCount;

@end
