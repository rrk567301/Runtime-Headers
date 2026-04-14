@class IDSQRProtoMaterial;

@interface IDSQRProtoUnAllocBindRequest : PBRequest <NSCopying> {
    struct { unsigned char reason : 1; } _has;
}

@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (readonly, nonatomic) BOOL hasClientContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterial *clientContextBlob;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reasonAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsReason:(id)a0;

@end
