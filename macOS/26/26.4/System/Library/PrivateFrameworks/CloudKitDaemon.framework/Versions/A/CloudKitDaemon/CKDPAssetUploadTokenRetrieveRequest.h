@class CKDPRecordType, CKDPRecordFieldIdentifier, NSMutableArray, NSData;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char options : 1; unsigned char authPutType : 1; } _has;
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
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) unsigned long long options;

+ (Class)contentRequestHeadersType;
+ (id)options;
+ (Class)uploadsType;
+ (Class)assetsType;

- (void)addAssets:(id)a0;
- (id)uploadsAtIndex:(unsigned long long)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (unsigned long long)contentRequestHeadersCount;
- (unsigned long long)uploadsCount;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addContentRequestHeaders:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addUploads:(id)a0;
- (void)clearContentRequestHeaders;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (id)authPutTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (int)StringAsAuthPutType:(id)a0;
- (void)clearUploads;
- (unsigned long long)assetsCount;

@end
