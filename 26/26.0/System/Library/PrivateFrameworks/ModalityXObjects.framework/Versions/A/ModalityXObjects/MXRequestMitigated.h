@class NSString;

@interface MXRequestMitigated : PBCodable <NSCopying> {
    struct { unsigned char mitigationType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL hasMitigationType;
@property (nonatomic) int mitigationType;

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
- (int)StringAsMitigationType:(id)a0;
- (id)mitigationTypeAsString:(int)a0;

@end
