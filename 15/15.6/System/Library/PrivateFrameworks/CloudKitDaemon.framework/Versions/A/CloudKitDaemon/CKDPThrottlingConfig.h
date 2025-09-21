@class NSString, CKDPThrottlingConfigCriteria, CKDPThrottlingConfigRateLimit;

@interface CKDPThrottlingConfig : PBCodable <NSCopying> {
    struct { unsigned char ttlSec : 1; } _has;
}

@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) char hasCriteria;
@property (retain, nonatomic) CKDPThrottlingConfigCriteria *criteria;
@property (readonly, nonatomic) char hasRateLimit;
@property (retain, nonatomic) CKDPThrottlingConfigRateLimit *rateLimit;
@property (nonatomic) char hasTtlSec;
@property (nonatomic) int ttlSec;

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
