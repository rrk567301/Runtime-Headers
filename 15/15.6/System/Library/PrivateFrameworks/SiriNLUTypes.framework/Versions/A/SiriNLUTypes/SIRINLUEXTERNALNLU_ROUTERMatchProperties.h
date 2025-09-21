@class SIRINLUEXTERNALNLU_ROUTERAliasTypes;

@interface SIRINLUEXTERNALNLU_ROUTERMatchProperties : PBCodable <NSCopying> {
    struct { unsigned char matchedTokenCount : 1; unsigned char maxTokenCount : 1; } _has;
}

@property (nonatomic) char hasMaxTokenCount;
@property (nonatomic) long long maxTokenCount;
@property (nonatomic) char hasMatchedTokenCount;
@property (nonatomic) long long matchedTokenCount;
@property (readonly, nonatomic) char hasMatchedAliasTypes;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERAliasTypes *matchedAliasTypes;

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

@end
