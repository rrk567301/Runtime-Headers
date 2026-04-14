@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requests;

+ (Class)requestType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearRequests;
- (void)addRequest:(id)a0;
- (unsigned long long)requestsCount;
- (id)requestAtIndex:(unsigned long long)a0;

@end
