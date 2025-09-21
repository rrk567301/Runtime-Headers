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

- (Class)responseClass;
- (void)addContentRequestHeaders:(id)a0;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentRequestHeadersCount;
- (void)clearContentRequestHeaders;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAssets:(id)a0;
- (id)dictionaryRepresentation;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)authPutTypeAsString:(int)a0;
- (int)StringAsAuthPutType:(id)a0;
- (unsigned long long)assetsCount;
- (unsigned long long)uploadsCount;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (void)addUploads:(id)a0;
- (void)clearUploads;
- (id)uploadsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearAssets;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
