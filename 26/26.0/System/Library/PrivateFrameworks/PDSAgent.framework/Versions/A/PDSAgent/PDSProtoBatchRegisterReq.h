@class NSMutableArray;

@interface PDSProtoBatchRegisterReq : PBCodable <NSCopying> {
    struct { unsigned char requestTtl : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *userPushTokenRegRequests;
@property (nonatomic) BOOL hasRequestTtl;
@property (nonatomic) long long requestTtl;

+ (Class)userPushTokenRegRequestsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addUserPushTokenRegRequests:(id)a0;
- (void)clearUserPushTokenRegRequests;
- (id)userPushTokenRegRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)userPushTokenRegRequestsCount;

@end
