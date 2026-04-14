@class NSMutableArray, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *reformedTurnInputBundles;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;

+ (Class)reformedTurnInputBundlesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addReformedTurnInputBundles:(id)a0;
- (void)clearReformedTurnInputBundles;
- (id)reformedTurnInputBundlesAtIndex:(unsigned long long)a0;
- (unsigned long long)reformedTurnInputBundlesCount;

@end
