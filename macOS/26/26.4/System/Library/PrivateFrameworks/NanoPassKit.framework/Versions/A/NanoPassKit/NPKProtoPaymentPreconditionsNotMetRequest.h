@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying>

@property (nonatomic) int failedPrecondition;
@property (retain, nonatomic) NSMutableArray *passIDs;

+ (Class)passIDsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsFailedPrecondition:(id)a0;
- (id)passIDsAtIndex:(unsigned long long)a0;
- (void)addPassIDs:(id)a0;
- (void)clearPassIDs;
- (id)failedPreconditionAsString:(int)a0;
- (unsigned long long)passIDsCount;

@end
