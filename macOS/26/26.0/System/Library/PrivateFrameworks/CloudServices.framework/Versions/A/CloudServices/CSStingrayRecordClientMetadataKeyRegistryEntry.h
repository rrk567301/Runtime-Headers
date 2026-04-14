@class NSString, NSMutableArray;

@interface CSStingrayRecordClientMetadataKeyRegistryEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPcsService;
@property (retain, nonatomic) NSString *pcsService;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (Class)publicKeysType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearPublicKeys;
- (unsigned long long)publicKeysCount;
- (void)addPublicKeys:(id)a0;
- (id)publicKeysAtIndex:(unsigned long long)a0;

@end
