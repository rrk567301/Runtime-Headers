@class NSPPrivacyProxyGetQuotaResponse;

@interface NSPPrivacyProxyQuotaServiceResponse : PBCodable <NSCopying> {
    struct { unsigned char requestType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) NSPPrivacyProxyGetQuotaResponse *response;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;

- (int)StringAsRequestType:(id)a0;
- (id)requestTypeAsString:(int)a0;
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
- (void)clearOneofValuesForRequestType;

@end
