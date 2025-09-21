@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALRequestID, NSMutableArray;

@interface SIRINLUINTERNALSSUSSURequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) char hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (retain, nonatomic) NSMutableArray *salientEntities;
@property (readonly, nonatomic) char hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *nluRequestId;

+ (Class)matchingSpansType;
+ (Class)salientEntitiesType;

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
- (void)addMatchingSpans:(id)a0;
- (void)addSalientEntities:(id)a0;
- (void)clearMatchingSpans;
- (void)clearSalientEntities;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)salientEntitiesCount;

@end
