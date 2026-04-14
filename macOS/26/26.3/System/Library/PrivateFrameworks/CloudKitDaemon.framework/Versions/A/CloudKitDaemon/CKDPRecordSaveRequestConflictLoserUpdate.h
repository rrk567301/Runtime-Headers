@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;

+ (Class)conflictLoserEtagsType;

- (void)addConflictLoserEtags:(id)a0;
- (void)clearConflictLoserEtags;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)conflictLoserEtagsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;

@end
