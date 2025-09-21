@class NSString;

@interface SGM2ContactDetailSent : PBCodable <NSCopying> {
    struct { unsigned char detail : 1; unsigned char foundIn : 1; unsigned char source : 1; unsigned char tokens : 1; unsigned char hasName : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasDetail;
@property (nonatomic) int detail;
@property (nonatomic) char hasFoundIn;
@property (nonatomic) int foundIn;
@property (nonatomic) char hasHasName;
@property (nonatomic) char hasName;
@property (nonatomic) char hasTokens;
@property (nonatomic) int tokens;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsDetail:(id)a0;
- (id)detailAsString:(int)a0;
- (int)StringAsTokens:(id)a0;
- (int)StringAsFoundIn:(id)a0;
- (id)tokensAsString:(int)a0;
- (id)foundInAsString:(int)a0;

@end
