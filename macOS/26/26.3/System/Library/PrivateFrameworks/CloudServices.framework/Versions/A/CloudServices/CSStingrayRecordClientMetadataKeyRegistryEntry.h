@class NSString, NSMutableArray;

@interface CSStingrayRecordClientMetadataKeyRegistryEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPcsService;
@property (retain, nonatomic) NSString *pcsService;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (Class)publicKeysType;

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
- (void)clearPublicKeys;
- (unsigned long long)publicKeysCount;
- (void)addPublicKeys:(id)a0;
- (id)publicKeysAtIndex:(unsigned long long)a0;

@end
