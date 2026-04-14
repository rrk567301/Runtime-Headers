@class CSFDERecordFDEClientMetadataFDEKeyRegistryFDEEntry;

@interface CSFDERecordFDEClientMetadataFDEKeyRegistry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceEntry;
@property (retain, nonatomic) CSFDERecordFDEClientMetadataFDEKeyRegistryFDEEntry *serviceEntry;

+ (id)parseFromKeyRegistryPlist:(id)a0 error:(id *)a1;

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
- (id)convertToPList;

@end
