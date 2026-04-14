@class NSMutableArray;

@interface CKDPShareAccessRequesters : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *requestingAccessUsers;

+ (Class)requestingAccessUsersType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRequestingAccessUsers:(id)a0;
- (void)clearRequestingAccessUsers;
- (id)requestingAccessUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)requestingAccessUsersCount;

@end
