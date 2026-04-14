@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *idsToArchives;

+ (id)options;
+ (Class)idsToArchiveType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addIdsToArchive:(id)a0;
- (unsigned long long)idsToArchivesCount;
- (void)clearIdsToArchives;
- (id)idsToArchiveAtIndex:(unsigned long long)a0;

@end
