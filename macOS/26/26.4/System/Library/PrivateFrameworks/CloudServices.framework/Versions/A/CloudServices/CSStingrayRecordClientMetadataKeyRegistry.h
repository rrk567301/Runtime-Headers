@class NSMutableArray;

@interface CSStingrayRecordClientMetadataKeyRegistry : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *serviceEntrys;

+ (id)parseFromKeyRegistryPlist:(id)a0 error:(id *)a1;
+ (Class)serviceEntryType;

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
- (void)addServiceEntry:(id)a0;
- (void)clearServiceEntrys;
- (id)convertToPList;
- (id)serviceEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)serviceEntrysCount;

@end
