@class SIRINLUEXTERNALNLU_ROUTERAliasTypes;

@interface SIRINLUEXTERNALNLU_ROUTERMatchProperties : PBCodable <NSCopying> {
    struct { unsigned char matchedTokenCount : 1; unsigned char maxTokenCount : 1; } _has;
}

@property (nonatomic) BOOL hasMaxTokenCount;
@property (nonatomic) long long maxTokenCount;
@property (nonatomic) BOOL hasMatchedTokenCount;
@property (nonatomic) long long matchedTokenCount;
@property (readonly, nonatomic) BOOL hasMatchedAliasTypes;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERAliasTypes *matchedAliasTypes;

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

@end
