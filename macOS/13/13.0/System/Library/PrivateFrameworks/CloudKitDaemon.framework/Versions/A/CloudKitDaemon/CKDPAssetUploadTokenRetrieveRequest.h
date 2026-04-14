@class CKDPRecordType, CKDPRecordFieldIdentifier, NSMutableArray, NSData;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char authPutType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *uploads;
@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (readonly, nonatomic) BOOL hasAuthPutRequest;
@property (retain, nonatomic) NSData *authPutRequest;
@property (nonatomic) BOOL hasAuthPutType;
@property (nonatomic) int authPutType;

+ (id)options;
+ (Class)contentRequestHeadersType;
+ (Class)assetsType;
+ (Class)uploadsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (unsigned long long)assetsCount;
- (void)addAssets:(id)a0;
- (void)clearAssets;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearContentRequestHeaders;
- (void)addContentRequestHeaders:(id)a0;
- (unsigned long long)contentRequestHeadersCount;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (void)clearUploads;
- (void)addUploads:(id)a0;
- (unsigned long long)uploadsCount;
- (id)uploadsAtIndex:(unsigned long long)a0;
- (id)authPutTypeAsString:(int)a0;
- (int)StringAsAuthPutType:(id)a0;

@end
