@class CKCDPCodeServiceRequestServiceClientConfig;

@interface CKCDPCodeServiceRequestClientConfig : PBCodable <NSCopying> {
    struct { unsigned char serviceType : 1; } _has;
}

@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;
@property (readonly, nonatomic) BOOL hasConfig;
@property (retain, nonatomic) CKCDPCodeServiceRequestServiceClientConfig *config;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)serviceTypeAsString:(int)a0;
- (int)StringAsServiceType:(id)a0;

@end
