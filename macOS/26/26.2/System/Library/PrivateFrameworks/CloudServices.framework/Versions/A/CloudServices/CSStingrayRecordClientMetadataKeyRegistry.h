@class NSMutableArray;

@interface CSStingrayRecordClientMetadataKeyRegistry : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *serviceEntrys;

+ (id)parseFromKeyRegistryPlist:(id)a0 error:(id *)a1;
+ (Class)serviceEntryType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addServiceEntry:(id)a0;
- (void)clearServiceEntrys;
- (id)convertToPList;
- (id)serviceEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)serviceEntrysCount;

@end
