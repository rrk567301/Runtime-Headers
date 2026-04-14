@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *tagIDs;

+ (Class)tagIDsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)addTagIDs:(id)a0;
- (void)clearTagIDs;
- (id)tagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)tagIDsCount;

@end
