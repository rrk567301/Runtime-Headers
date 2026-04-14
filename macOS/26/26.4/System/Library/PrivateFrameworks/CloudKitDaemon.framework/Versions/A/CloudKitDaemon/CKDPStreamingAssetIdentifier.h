@class NSString, NSData;

@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (readonly, nonatomic) BOOL hasFileSignature;
@property (retain, nonatomic) NSData *fileSignature;
@property (readonly, nonatomic) BOOL hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
