@class NSMutableArray, NTPBRecordBase;

@interface NTPBIssueListRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *issueIDs;

+ (Class)issueIDsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIssueIDs:(id)a0;
- (void)clearIssueIDs;
- (unsigned long long)issueIDsCount;
- (id)issueIDsAtIndex:(unsigned long long)a0;

@end
