@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {
    struct { unsigned char contentRequestAuthorizeGetOptions : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (nonatomic) char hasContentRequestAuthorizeGetOptions;
@property (nonatomic) unsigned long long contentRequestAuthorizeGetOptions;

+ (Class)contentRequestHeadersType;

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
- (void)addContentRequestHeaders:(id)a0;
- (void)clearContentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentRequestHeadersCount;

@end
