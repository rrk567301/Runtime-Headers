@class NSString, NSMutableArray;

@interface CSStingrayRecordClientMetadataKeyRegistryEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPcsService;
@property (retain, nonatomic) NSString *pcsService;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (Class)publicKeysType;

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
- (unsigned long long)publicKeysCount;
- (void)clearPublicKeys;
- (void)addPublicKeys:(id)a0;
- (id)publicKeysAtIndex:(unsigned long long)a0;

@end
