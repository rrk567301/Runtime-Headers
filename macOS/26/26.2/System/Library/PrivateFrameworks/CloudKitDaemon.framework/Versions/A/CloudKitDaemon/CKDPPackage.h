@class NSMutableArray, CKDPAsset;

@interface CKDPPackage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasManifest;
@property (retain, nonatomic) CKDPAsset *manifest;
@property (retain, nonatomic) NSMutableArray *sections;

+ (Class)sectionsType;

- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)addSections:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)sectionsCount;
- (id)dictionaryRepresentation;

@end
