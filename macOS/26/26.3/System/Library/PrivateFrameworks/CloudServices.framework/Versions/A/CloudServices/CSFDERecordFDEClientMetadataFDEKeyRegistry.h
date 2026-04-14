@class CSFDERecordFDEClientMetadataFDEKeyRegistryFDEEntry;

@interface CSFDERecordFDEClientMetadataFDEKeyRegistry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEntry;
@property (retain, nonatomic) CSFDERecordFDEClientMetadataFDEKeyRegistryFDEEntry *entry;

+ (id)parseFromKeyRegistryPlist:(id)a0 error:(id *)a1;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)convertToPList;

@end
