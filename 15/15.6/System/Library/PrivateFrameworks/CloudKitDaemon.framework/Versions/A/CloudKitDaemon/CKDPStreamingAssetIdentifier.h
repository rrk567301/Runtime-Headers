@class NSString, NSData;

@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (readonly, nonatomic) char hasFileSignature;
@property (retain, nonatomic) NSData *fileSignature;
@property (readonly, nonatomic) char hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;

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

@end
