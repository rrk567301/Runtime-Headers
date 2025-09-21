@class NSData, NSString, CKDPPackage, CKDPStreamingAsset, CKDPEncryptedMergeableValue, CKDPFieldCryptoFeatureSet, CKDPMergeableValue, NSMutableArray, CKDPDate, CKDPLocationCoordinate, CKDPRecordReference, CKDPAsset;

@interface CKDPRecordFieldValue : PBCodable <NSCopying> {
    struct { unsigned char ckDoubleValue : 1; unsigned char signedValue : 1; unsigned char type : 1; unsigned char isEncrypted : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) char hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) char hasCkDoubleValue;
@property (nonatomic) double ckDoubleValue;
@property (readonly, nonatomic) char hasDateValue;
@property (retain, nonatomic) CKDPDate *dateValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char hasLocationValue;
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue;
@property (readonly, nonatomic) char hasReferenceValue;
@property (retain, nonatomic) CKDPRecordReference *referenceValue;
@property (readonly, nonatomic) char hasAssetValue;
@property (retain, nonatomic) CKDPAsset *assetValue;
@property (retain, nonatomic) NSMutableArray *listValues;
@property (readonly, nonatomic) char hasPackageValue;
@property (retain, nonatomic) CKDPPackage *packageValue;
@property (readonly, nonatomic) char hasStreamingAssetValue;
@property (retain, nonatomic) CKDPStreamingAsset *streamingAssetValue;
@property (readonly, nonatomic) char hasMergeableValue;
@property (retain, nonatomic) CKDPMergeableValue *mergeableValue;
@property (readonly, nonatomic) char hasEncryptedMergeableValue;
@property (retain, nonatomic) CKDPEncryptedMergeableValue *encryptedMergeableValue;
@property (nonatomic) char hasIsEncrypted;
@property (nonatomic) char isEncrypted;
@property (readonly, nonatomic) char hasAppliedCryptoFeatures;
@property (retain, nonatomic) CKDPFieldCryptoFeatureSet *appliedCryptoFeatures;

+ (Class)listValueType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearListValues;
- (unsigned long long)listValuesCount;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)addListValue:(id)a0;
- (id)listValueAtIndex:(unsigned long long)a0;

@end
