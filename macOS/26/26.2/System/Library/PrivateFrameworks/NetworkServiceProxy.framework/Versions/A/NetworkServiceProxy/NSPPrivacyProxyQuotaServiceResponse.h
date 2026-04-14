@class NSPPrivacyProxyGetQuotaResponse;

@interface NSPPrivacyProxyQuotaServiceResponse : PBCodable <NSCopying> {
    struct { unsigned char requestType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) NSPPrivacyProxyGetQuotaResponse *response;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;

- (id)requestTypeAsString:(int)a0;
- (int)StringAsRequestType:(id)a0;
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
- (void)clearOneofValuesForRequestType;

@end
