@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *mentions;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) NSString *rewrittenUtterance;

+ (Class)mentionsType;

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
- (void)addMentions:(id)a0;
- (void)clearMentions;
- (id)mentionsAtIndex:(unsigned long long)a0;
- (unsigned long long)mentionsCount;

@end
