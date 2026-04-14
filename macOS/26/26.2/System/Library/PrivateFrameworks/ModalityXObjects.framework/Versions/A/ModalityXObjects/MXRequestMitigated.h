@class NSString;

@interface MXRequestMitigated : PBCodable <NSCopying> {
    struct { unsigned char mitigationType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL hasMitigationType;
@property (nonatomic) int mitigationType;

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
- (int)StringAsMitigationType:(id)a0;
- (id)mitigationTypeAsString:(int)a0;

@end
