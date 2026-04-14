@class NSPPrivacyProxyErrorResponse, NSPPrivacyProxySuccessResponse;

@interface NSPPrivacyProxyGetQuotaResponse : PBCodable <NSCopying> {
    struct { unsigned char getQuotaResponseType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) NSPPrivacyProxySuccessResponse *success;
@property (readonly, nonatomic) BOOL hasGenericError;
@property (retain, nonatomic) NSPPrivacyProxyErrorResponse *genericError;
@property (nonatomic) BOOL hasGetQuotaResponseType;
@property (nonatomic) int getQuotaResponseType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsGetQuotaResponseType:(id)a0;
- (void)clearOneofValuesForGetQuotaResponseType;
- (id)getQuotaResponseTypeAsString:(int)a0;

@end
