@class NSMutableArray;

@interface CKDPShareAccessBlockedRequesters : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *blockedUsers;

+ (Class)blockedUsersType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBlockedUsers:(id)a0;
- (id)blockedUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)blockedUsersCount;
- (void)clearBlockedUsers;

@end
