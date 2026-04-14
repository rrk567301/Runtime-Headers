@class NSMutableArray;

@interface CKDPShareAccessBlockedRequesters : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *blockedRequestingAccessUsers;

+ (Class)blockedRequestingAccessUsersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBlockedRequestingAccessUsers:(id)a0;
- (id)blockedRequestingAccessUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)blockedRequestingAccessUsersCount;
- (void)clearBlockedRequestingAccessUsers;

@end
