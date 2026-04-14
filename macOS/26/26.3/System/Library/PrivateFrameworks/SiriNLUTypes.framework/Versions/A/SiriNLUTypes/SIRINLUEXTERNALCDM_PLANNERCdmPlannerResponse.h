@class NSString, NSData, NSMutableArray;

@interface SIRINLUEXTERNALCDM_PLANNERCdmPlannerResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlanText;
@property (retain, nonatomic) NSString *planText;
@property (readonly, nonatomic) BOOL hasGeneratedTranscriptEventsJson;
@property (retain, nonatomic) NSData *generatedTranscriptEventsJson;
@property (retain, nonatomic) NSMutableArray *transcriptEvents;

+ (Class)transcriptEventsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTranscriptEvents:(id)a0;
- (void)clearTranscriptEvents;
- (id)transcriptEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)transcriptEventsCount;

@end
