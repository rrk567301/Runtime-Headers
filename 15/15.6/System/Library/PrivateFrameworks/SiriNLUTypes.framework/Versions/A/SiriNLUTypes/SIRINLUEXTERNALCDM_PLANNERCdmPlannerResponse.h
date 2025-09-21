@class NSString, NSData, NSMutableArray;

@interface SIRINLUEXTERNALCDM_PLANNERCdmPlannerResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPlanText;
@property (retain, nonatomic) NSString *planText;
@property (readonly, nonatomic) char hasGeneratedTranscriptEventsJson;
@property (retain, nonatomic) NSData *generatedTranscriptEventsJson;
@property (retain, nonatomic) NSMutableArray *transcriptEvents;

+ (Class)transcriptEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTranscriptEvents:(id)a0;
- (void)clearTranscriptEvents;
- (id)transcriptEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)transcriptEventsCount;

@end
