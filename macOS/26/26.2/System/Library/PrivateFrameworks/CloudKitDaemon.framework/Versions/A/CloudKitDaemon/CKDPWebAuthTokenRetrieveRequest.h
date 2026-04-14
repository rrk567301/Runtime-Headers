@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char forceFetchToken : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApiToken;
@property (retain, nonatomic) NSString *apiToken;
@property (nonatomic) BOOL hasForceFetchToken;
@property (nonatomic) BOOL forceFetchToken;

+ (id)options;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;

@end
