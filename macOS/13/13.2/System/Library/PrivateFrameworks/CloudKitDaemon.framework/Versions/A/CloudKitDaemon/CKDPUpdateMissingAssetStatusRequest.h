@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPUpdateMissingAssetStatusRequest : PBRequest <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _packageAssetSizes;
    struct { unsigned char assetSize : 1; unsigned char recovered : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMissingAssetStatusRecordID;
@property (retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecordID;
@property (nonatomic) BOOL hasRecovered;
@property (nonatomic) BOOL recovered;
@property (nonatomic) BOOL hasAssetSize;
@property (nonatomic) long long assetSize;
@property (readonly, nonatomic) BOOL hasAssetPutReceipt;
@property (retain, nonatomic) NSString *assetPutReceipt;
@property (readonly, nonatomic) unsigned long long packageAssetSizesCount;
@property (readonly, nonatomic) long long *packageAssetSizes;
@property (retain, nonatomic) NSMutableArray *packagePutReceipts;

+ (id)options;
+ (Class)packagePutReceiptsType;

- (void)dealloc;
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
- (void)clearPackageAssetSizes;
- (void)addPackageAssetSize:(long long)a0;
- (long long)packageAssetSizeAtIndex:(unsigned long long)a0;
- (void)setPackageAssetSizes:(long long *)a0 count:(unsigned long long)a1;
- (void)clearPackagePutReceipts;
- (void)addPackagePutReceipts:(id)a0;
- (unsigned long long)packagePutReceiptsCount;
- (id)packagePutReceiptsAtIndex:(unsigned long long)a0;

@end
