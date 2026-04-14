@class NSMutableArray;

@interface SECSFAVersionMatch : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versions;

+ (Class)versionsType;

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
- (void)addVersions:(id)a0;
- (void)clearVersions;
- (id)versionsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionsCount;

@end
