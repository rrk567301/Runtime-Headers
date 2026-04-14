@class PDSProtoUserPushToken, NSMutableArray;

@interface PDSProtoUserPushTokenRegRequest : PBRequest <NSCopying> {
    struct { unsigned char ttl : 1; } _has;
}

@property (retain, nonatomic) PDSProtoUserPushToken *userPushToken;
@property (retain, nonatomic) NSMutableArray *deviceInfos;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) long long ttl;
@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)deviceInfoType;
+ (Class)topicType;

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
- (void)clearTopics;
- (unsigned long long)topicsCount;
- (void)addTopic:(id)a0;
- (void)addDeviceInfo:(id)a0;
- (unsigned long long)deviceInfosCount;
- (void)clearDeviceInfos;
- (id)deviceInfoAtIndex:(unsigned long long)a0;
- (id)topicAtIndex:(unsigned long long)a0;

@end
