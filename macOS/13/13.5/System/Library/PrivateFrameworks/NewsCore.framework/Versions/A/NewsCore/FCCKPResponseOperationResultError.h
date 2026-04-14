@class NSString, FCCKPResponseOperationResultErrorServer, FCCKPResponseOperationResultErrorClient, FCCKPResponseOperationResultErrorExtension;

@interface FCCKPResponseOperationResultError : PBCodable <NSCopying> {
    FCCKPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorKey;
    FCCKPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    FCCKPResponseOperationResultErrorServer *_serverError;
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
