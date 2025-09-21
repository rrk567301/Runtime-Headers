@class CKDPResponseOperationResultErrorServer, CKDPResponseOperationResultErrorAuxiliaryError, CKDPResponseOperationResultErrorExtension, NSString, CKDPResponseOperationResultErrorClient;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

@property (readonly, nonatomic) char hasClientError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorClient *clientError;
@property (readonly, nonatomic) char hasServerError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorServer *serverError;
@property (readonly, nonatomic) char hasExtensionError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorExtension *extensionError;
@property (readonly, nonatomic) char hasAuxiliaryError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorAuxiliaryError *auxiliaryError;
@property (nonatomic) char hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) char hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;
@property (readonly, nonatomic) char hasErrorInternal;
@property (retain, nonatomic) NSString *errorInternal;

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
