@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALRequestID, NSMutableArray;

@interface SIRINLUINTERNALQUERYREWRITEQRRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *interactions;
@property (retain, nonatomic) NSMutableArray *originalInteractions;
@property (readonly, nonatomic) char hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) char hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) char hasCdmRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId;

+ (Class)interactionsType;
+ (Class)originalInteractionsType;

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
- (void)addInteractions:(id)a0;
- (void)clearInteractions;
- (id)interactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)interactionsCount;
- (void)addOriginalInteractions:(id)a0;
- (void)clearOriginalInteractions;
- (id)originalInteractionsAtIndex:(unsigned long long)a0;
- (unsigned long long)originalInteractionsCount;

@end
