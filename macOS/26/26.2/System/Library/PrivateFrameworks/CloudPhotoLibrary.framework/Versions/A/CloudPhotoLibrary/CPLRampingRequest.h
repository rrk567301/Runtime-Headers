@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requests;

+ (Class)requestType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)addRequest:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearRequests;
- (id)requestAtIndex:(unsigned long long)a0;
- (unsigned long long)requestsCount;

@end
