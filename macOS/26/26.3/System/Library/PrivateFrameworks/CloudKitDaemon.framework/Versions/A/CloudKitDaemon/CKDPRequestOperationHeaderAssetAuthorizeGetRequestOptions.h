@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {
    struct { unsigned char contentRequestAuthorizeGetOptions : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (nonatomic) BOOL hasContentRequestAuthorizeGetOptions;
@property (nonatomic) unsigned long long contentRequestAuthorizeGetOptions;

+ (Class)contentRequestHeadersType;

- (id)dictionaryRepresentation;
- (void)addContentRequestHeaders:(id)a0;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (id)description;
- (void)clearContentRequestHeaders;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)contentRequestHeadersCount;

@end
