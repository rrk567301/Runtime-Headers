@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALUAAP_PARSERUaaPParserResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *hypotheses;

+ (Class)hypothesesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addHypotheses:(id)a0;
- (unsigned long long)hypothesesCount;
- (void)clearHypotheses;
- (id)hypothesesAtIndex:(unsigned long long)a0;

@end
