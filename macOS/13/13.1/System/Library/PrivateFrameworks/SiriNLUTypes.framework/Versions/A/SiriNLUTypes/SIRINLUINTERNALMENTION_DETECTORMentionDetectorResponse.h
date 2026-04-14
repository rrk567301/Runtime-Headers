@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *mentions;

+ (Class)mentionsType;

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
- (void)clearMentions;
- (void)addMentions:(id)a0;
- (unsigned long long)mentionsCount;
- (id)mentionsAtIndex:(unsigned long long)a0;

@end
