@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;

+ (Class)conflictLoserEtagsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearConflictLoserEtags;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)conflictLoserEtagsCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addConflictLoserEtags:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
