@class NSString;

@interface AWDSafariAutoFillAuthenticationEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char category : 1; unsigned char client : 1; unsigned char status : 1; unsigned char onPageLoad : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasCategory;
@property (nonatomic) int category;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasClient;
@property (nonatomic) int client;
@property (nonatomic) char hasOnPageLoad;
@property (nonatomic) char onPageLoad;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) char hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;
- (id)clientAsString:(int)a0;
- (int)StringAsClient:(id)a0;

@end
