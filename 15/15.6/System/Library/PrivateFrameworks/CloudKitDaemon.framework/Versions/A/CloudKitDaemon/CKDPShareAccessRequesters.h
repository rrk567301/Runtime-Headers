@class NSMutableArray;

@interface CKDPShareAccessRequesters : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *requestingAccessUsers;

+ (Class)requestingAccessUsersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRequestingAccessUsers:(id)a0;
- (void)clearRequestingAccessUsers;
- (id)requestingAccessUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)requestingAccessUsersCount;

@end
