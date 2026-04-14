@class NSMutableArray;

@interface SECSFAVersionMatch : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versions;

+ (Class)versionsType;

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
- (void)addVersions:(id)a0;
- (void)clearVersions;
- (id)versionsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionsCount;

@end
