@class NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALQUERYREWRITEQRHypothesis : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char rewriteType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) int rewriteType;

+ (id)options;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsRewriteType:(id)a0;
- (id)rewriteTypeAsString:(int)a0;

@end
