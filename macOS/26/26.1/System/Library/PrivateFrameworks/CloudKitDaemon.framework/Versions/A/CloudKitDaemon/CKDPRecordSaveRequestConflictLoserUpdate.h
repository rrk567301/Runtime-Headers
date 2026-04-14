@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;

+ (Class)conflictLoserEtagsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)clearConflictLoserEtags;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)conflictLoserEtagsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addConflictLoserEtags:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;

@end
