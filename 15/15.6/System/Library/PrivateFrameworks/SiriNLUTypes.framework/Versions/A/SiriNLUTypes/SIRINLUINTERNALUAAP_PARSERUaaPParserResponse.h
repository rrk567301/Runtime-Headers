@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALUAAP_PARSERUaaPParserResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *hypotheses;

+ (Class)hypothesesType;

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
- (unsigned long long)hypothesesCount;
- (void)clearHypotheses;
- (void)addHypotheses:(id)a0;
- (id)hypothesesAtIndex:(unsigned long long)a0;

@end
