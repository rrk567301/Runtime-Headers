@class NTPBCKResponseOperationResultErrorExtension, NSString, NTPBCKResponseOperationResultErrorClient, NTPBCKResponseOperationResultErrorServer;

@interface NTPBCKResponseOperationResultError : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

@property (readonly, nonatomic) char hasClientError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorClient *clientError;
@property (readonly, nonatomic) char hasServerError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorServer *serverError;
@property (readonly, nonatomic) char hasExtensionError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorExtension *extensionError;
@property (nonatomic) char hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) char hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
