@interface SIRINLUEXTERNALNLU_ROUTERNLRoutingGenAIMetadata : PBCodable <NSCopying> {
    struct { unsigned char prescribedTool : 1; unsigned char queryType : 1; } _has;
}

@property (nonatomic) char hasPrescribedTool;
@property (nonatomic) int prescribedTool;
@property (nonatomic) char hasQueryType;
@property (nonatomic) int queryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsQueryType:(id)a0;
- (id)queryTypeAsString:(int)a0;
- (int)StringAsPrescribedTool:(id)a0;
- (id)prescribedToolAsString:(int)a0;

@end
