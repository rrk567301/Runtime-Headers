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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsGetQuotaResponseType:(id)a0;
- (void)clearOneofValuesForGetQuotaResponseType;
- (id)getQuotaResponseTypeAsString:(int)a0;

@end
