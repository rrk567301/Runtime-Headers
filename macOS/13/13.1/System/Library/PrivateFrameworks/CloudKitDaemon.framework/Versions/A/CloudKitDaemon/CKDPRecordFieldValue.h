@class NSData, NSString, CKDPPackage, CKDPStreamingAsset, CKDPEncryptedMergeableValue, CKDPMergeableValue, NSMutableArray, CKDPDate, CKDPLocationCoordinate, CKDPRecordReference, CKDPAsset;

@interface CKDPRecordFieldValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char signedValue : 1; unsigned char type : 1; unsigned char isEncrypted : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) BOOL hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) CKDPDate *dateValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasLocationValue;
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (retain, nonatomic) CKDPRecordReference *referenceValue;
@property (readonly, nonatomic) BOOL hasAssetValue;
@property (retain, nonatomic) CKDPAsset *assetValue;
@property (retain, nonatomic) NSMutableArray *listValues;
@property (readonly, nonatomic) BOOL hasPackageValue;
@property (retain, nonatomic) CKDPPackage *packageValue;
@property (readonly, nonatomic) BOOL hasStreamingAssetValue;
@property (retain, nonatomic) CKDPStreamingAsset *streamingAssetValue;
@property (readonly, nonatomic) BOOL hasMergeableValue;
@property (retain, nonatomic) CKDPMergeableValue *mergeableValue;
@property (readonly, nonatomic) BOOL hasEncryptedMergeableValue;
@property (retain, nonatomic) CKDPEncryptedMergeableValue *encryptedMergeableValue;
@property (nonatomic) BOOL hasIsEncrypted;
@property (nonatomic) BOOL isEncrypted;

+ (Class)listValueType;

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
- (id)typeAsString:(int)a0;
- (int)StringAsType:(id)a0;
- (void)clearListValues;
- (void)addListValue:(id)a0;
- (unsigned long long)listValuesCount;
- (id)listValueAtIndex:(unsigned long long)a0;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;

@end
