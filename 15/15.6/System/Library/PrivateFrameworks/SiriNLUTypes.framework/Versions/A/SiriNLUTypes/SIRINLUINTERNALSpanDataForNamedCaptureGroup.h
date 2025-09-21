@class NSString;

@interface SIRINLUINTERNALSpanDataForNamedCaptureGroup : PBCodable <NSCopying> {
    struct { unsigned char targetNodeIdx : 1; unsigned char targetUdaIdx : 1; } _has;
}

@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char hasTargetNodeIdx;
@property (nonatomic) int targetNodeIdx;
@property (nonatomic) char hasTargetUdaIdx;
@property (nonatomic) int targetUdaIdx;

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
