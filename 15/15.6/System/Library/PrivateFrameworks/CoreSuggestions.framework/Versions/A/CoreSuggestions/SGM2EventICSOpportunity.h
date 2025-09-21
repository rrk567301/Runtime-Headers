@class NSString;

@interface SGM2EventICSOpportunity : PBCodable <NSCopying> {
    struct { unsigned char recipient : 1; unsigned char source : 1; unsigned char accountSetup : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasRecipient;
@property (nonatomic) int recipient;
@property (nonatomic) char hasAccountSetup;
@property (nonatomic) char accountSetup;

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
- (int)StringAsRecipient:(id)a0;
- (id)recipientAsString:(int)a0;

@end
