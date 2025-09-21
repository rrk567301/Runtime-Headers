@class NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALQUERYREWRITEQRHypothesis : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char rewriteType : 1; } _has;
}

@property (readonly, nonatomic) char hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) char hasRewriteType;
@property (nonatomic) int rewriteType;

+ (id)options;

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
- (int)StringAsRewriteType:(id)a0;
- (id)rewriteTypeAsString:(int)a0;

@end
