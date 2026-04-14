@class NSPPrivacyProxyGetQuotaRequest, NSPPrivacyProxyBAAValidation;

@interface NSPPrivacyProxyQuotaServiceRequest : PBRequest <NSCopying> {
    struct { unsigned char requestType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBaa;
@property (retain, nonatomic) NSPPrivacyProxyBAAValidation *baa;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NSPPrivacyProxyGetQuotaRequest *request;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsRequestType:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)requestTypeAsString:(int)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearOneofValuesForRequestType;

@end
