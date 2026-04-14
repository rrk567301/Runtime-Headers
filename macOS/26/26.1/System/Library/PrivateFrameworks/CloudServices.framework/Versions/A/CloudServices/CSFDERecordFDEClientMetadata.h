@class CSFDERecordFDEClientMetadataFDEiCloudDataProtection, CSFDERecordFDEClientMetadataFDEKeyRegistry;

@interface CSFDERecordFDEClientMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIcdp;
@property (retain, nonatomic) CSFDERecordFDEClientMetadataFDEiCloudDataProtection *icdp;
@property (readonly, nonatomic) BOOL hasKeyRegistry;
@property (retain, nonatomic) CSFDERecordFDEClientMetadataFDEKeyRegistry *keyRegistry;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
