@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPMarkAssetBrokenRequest : PBRequest <NSCopying> {
    struct { unsigned char listIndex : 1; unsigned char isPackage : 1; unsigned char skipWriteMissingAssetStatusRecord : 1; } _has;
}

@property (readonly, nonatomic) char hasBrokenAssetRecordID;
@property (retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID;
@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (nonatomic) char hasListIndex;
@property (nonatomic) int listIndex;
@property (retain, nonatomic) NSMutableArray *fileSignatures;
@property (retain, nonatomic) NSMutableArray *referenceSignatures;
@property (nonatomic) char hasIsPackage;
@property (nonatomic) char isPackage;
@property (readonly, nonatomic) char hasAffectedRecordType;
@property (retain, nonatomic) NSString *affectedRecordType;
@property (nonatomic) char hasSkipWriteMissingAssetStatusRecord;
@property (nonatomic) char skipWriteMissingAssetStatusRecord;

+ (id)options;
+ (Class)fileSignatureType;
+ (Class)referenceSignatureType;

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
- (void)addFileSignature:(id)a0;
- (void)addReferenceSignature:(id)a0;
- (void)clearFileSignatures;
- (void)clearReferenceSignatures;
- (id)fileSignatureAtIndex:(unsigned long long)a0;
- (unsigned long long)fileSignaturesCount;
- (id)referenceSignatureAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceSignaturesCount;

@end
