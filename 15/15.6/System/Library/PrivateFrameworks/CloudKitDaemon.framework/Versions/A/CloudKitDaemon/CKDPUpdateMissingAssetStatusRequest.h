@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPUpdateMissingAssetStatusRequest : PBRequest <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _packageAssetSizes;
    struct { unsigned char assetSize : 1; unsigned char recovered : 1; } _has;
}

@property (readonly, nonatomic) char hasMissingAssetStatusRecordID;
@property (retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecordID;
@property (nonatomic) char hasRecovered;
@property (nonatomic) char recovered;
@property (nonatomic) char hasAssetSize;
@property (nonatomic) long long assetSize;
@property (readonly, nonatomic) char hasAssetPutReceipt;
@property (retain, nonatomic) NSString *assetPutReceipt;
@property (readonly, nonatomic) unsigned long long packageAssetSizesCount;
@property (readonly, nonatomic) long long *packageAssetSizes;
@property (retain, nonatomic) NSMutableArray *packagePutReceipts;

+ (id)options;
+ (Class)packagePutReceiptsType;

- (void)dealloc;
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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addPackageAssetSize:(long long)a0;
- (void)addPackagePutReceipts:(id)a0;
- (void)clearPackageAssetSizes;
- (void)clearPackagePutReceipts;
- (long long)packageAssetSizeAtIndex:(unsigned long long)a0;
- (id)packagePutReceiptsAtIndex:(unsigned long long)a0;
- (unsigned long long)packagePutReceiptsCount;
- (void)setPackageAssetSizes:(long long *)a0 count:(unsigned long long)a1;

@end
