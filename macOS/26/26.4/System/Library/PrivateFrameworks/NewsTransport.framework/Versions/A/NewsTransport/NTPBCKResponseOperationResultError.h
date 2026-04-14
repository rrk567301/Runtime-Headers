@class NTPBCKResponseOperationResultErrorExtension, NSString, NTPBCKResponseOperationResultErrorClient, NTPBCKResponseOperationResultErrorServer;

@interface NTPBCKResponseOperationResultError : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorClient *clientError;
@property (readonly, nonatomic) BOOL hasServerError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorServer *serverError;
@property (readonly, nonatomic) BOOL hasExtensionError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorExtension *extensionError;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
