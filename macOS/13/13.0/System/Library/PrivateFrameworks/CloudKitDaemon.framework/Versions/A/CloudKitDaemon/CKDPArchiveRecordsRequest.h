@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *idsToArchives;

+ (id)options;
+ (Class)idsToArchiveType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearIdsToArchives;
- (void)addIdsToArchive:(id)a0;
- (unsigned long long)idsToArchivesCount;
- (id)idsToArchiveAtIndex:(unsigned long long)a0;

@end
