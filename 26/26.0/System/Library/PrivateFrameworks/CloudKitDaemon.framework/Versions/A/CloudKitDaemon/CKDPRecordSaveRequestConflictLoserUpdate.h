@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;

+ (Class)conflictLoserEtagsType;

- (unsigned long long)conflictLoserEtagsCount;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addConflictLoserEtags:(id)a0;
- (void).cxx_destruct;
- (void)clearConflictLoserEtags;

@end
