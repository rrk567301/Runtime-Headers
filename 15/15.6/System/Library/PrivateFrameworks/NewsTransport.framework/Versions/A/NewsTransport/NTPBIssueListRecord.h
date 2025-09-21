@class NSMutableArray, NTPBRecordBase;

@interface NTPBIssueListRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *issueIDs;

+ (Class)issueIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIssueIDs:(id)a0;
- (void)clearIssueIDs;
- (id)issueIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)issueIDsCount;

@end
