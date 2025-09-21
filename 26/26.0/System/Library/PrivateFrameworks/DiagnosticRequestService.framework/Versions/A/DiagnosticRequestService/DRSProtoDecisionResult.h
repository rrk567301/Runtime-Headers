@class NSString;

@interface DRSProtoDecisionResult : PBCodable <NSCopying> {
    struct { unsigned char accepted : 1; } _has;
}

@property (nonatomic) BOOL hasAccepted;
@property (nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL hasRejectionReason;
@property (retain, nonatomic) NSString *rejectionReason;

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

@end
