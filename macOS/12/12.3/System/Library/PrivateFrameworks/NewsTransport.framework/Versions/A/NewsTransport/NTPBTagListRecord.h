@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *tagIDs;

+ (Class)tagIDsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTagIDs:(id)a0;
- (void)clearTagIDs;
- (unsigned long long)tagIDsCount;
- (id)tagIDsAtIndex:(unsigned long long)a0;

@end
