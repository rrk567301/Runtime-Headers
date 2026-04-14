@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALRequestID, NSMutableArray;

@interface SIRINLUINTERNALQUERYREWRITEQRRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *interactions;
@property (retain, nonatomic) NSMutableArray *originalInteractions;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) BOOL hasCdmRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId;

+ (Class)interactionsType;
+ (Class)originalInteractionsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearInteractions;
- (void)addInteractions:(id)a0;
- (unsigned long long)interactionsCount;
- (id)interactionsAtIndex:(unsigned long long)a0;
- (void)addOriginalInteractions:(id)a0;
- (void)clearOriginalInteractions;
- (unsigned long long)originalInteractionsCount;
- (id)originalInteractionsAtIndex:(unsigned long long)a0;

@end
