@class NSMutableArray;

@interface PDSProtoBatchRegisterReq : PBCodable <NSCopying> {
    struct { unsigned char requestTtl : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *userPushTokenRegRequests;
@property (nonatomic) BOOL hasRequestTtl;
@property (nonatomic) long long requestTtl;

+ (Class)userPushTokenRegRequestsType;

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
- (void)addUserPushTokenRegRequests:(id)a0;
- (void)clearUserPushTokenRegRequests;
- (id)userPushTokenRegRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)userPushTokenRegRequestsCount;

@end
