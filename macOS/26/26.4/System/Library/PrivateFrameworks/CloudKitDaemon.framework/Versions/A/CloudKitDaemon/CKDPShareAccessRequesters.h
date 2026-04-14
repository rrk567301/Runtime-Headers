@class NSMutableArray;

@interface CKDPShareAccessRequesters : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *requestingAccessUsers;

+ (Class)requestingAccessUsersType;

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
- (void)addRequestingAccessUsers:(id)a0;
- (void)clearRequestingAccessUsers;
- (id)requestingAccessUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)requestingAccessUsersCount;

@end
