@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPMarkAssetBrokenRequest : PBRequest <NSCopying> {
    struct { unsigned char listIndex : 1; unsigned char isPackage : 1; unsigned char skipWriteMissingAssetStatusRecord : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBrokenAssetRecordID;
@property (retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID;
@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (nonatomic) BOOL hasListIndex;
@property (nonatomic) int listIndex;
@property (retain, nonatomic) NSMutableArray *fileSignatures;
@property (retain, nonatomic) NSMutableArray *referenceSignatures;
@property (nonatomic) BOOL hasIsPackage;
@property (nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL hasAffectedRecordType;
@property (retain, nonatomic) NSString *affectedRecordType;
@property (nonatomic) BOOL hasSkipWriteMissingAssetStatusRecord;
@property (nonatomic) BOOL skipWriteMissingAssetStatusRecord;

+ (id)options;
+ (Class)fileSignatureType;
+ (Class)referenceSignatureType;

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
- (void)addFileSignature:(id)a0;
- (void)addReferenceSignature:(id)a0;
- (void)clearFileSignatures;
- (void)clearReferenceSignatures;
- (id)fileSignatureAtIndex:(unsigned long long)a0;
- (unsigned long long)fileSignaturesCount;
- (id)referenceSignatureAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceSignaturesCount;

@end
