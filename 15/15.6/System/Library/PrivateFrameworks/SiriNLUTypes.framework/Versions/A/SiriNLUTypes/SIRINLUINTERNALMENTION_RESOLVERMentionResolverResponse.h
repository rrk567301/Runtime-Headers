@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *mentions;
@property (readonly, nonatomic) char hasRewrittenUtterance;
@property (retain, nonatomic) NSString *rewrittenUtterance;

+ (Class)mentionsType;

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
- (void)addMentions:(id)a0;
- (void)clearMentions;
- (id)mentionsAtIndex:(unsigned long long)a0;
- (unsigned long long)mentionsCount;

@end
