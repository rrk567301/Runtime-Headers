@class NSMutableArray;

@interface SECSFAVersionMatch : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versions;

+ (Class)versionsType;

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
- (void)addVersions:(id)a0;
- (void)clearVersions;
- (id)versionsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionsCount;

@end
