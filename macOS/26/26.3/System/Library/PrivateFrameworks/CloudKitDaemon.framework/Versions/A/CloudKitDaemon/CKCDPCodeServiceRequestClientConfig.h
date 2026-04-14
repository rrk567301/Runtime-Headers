@class CKCDPCodeServiceRequestServiceClientConfig;

@interface CKCDPCodeServiceRequestClientConfig : PBCodable <NSCopying> {
    struct { unsigned char serviceType : 1; } _has;
}

@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;
@property (readonly, nonatomic) BOOL hasConfig;
@property (retain, nonatomic) CKCDPCodeServiceRequestServiceClientConfig *config;

- (id)dictionaryRepresentation;
- (int)StringAsServiceType:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serviceTypeAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
