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

- (unsigned long long)topicsCount;
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
- (void)clearTopics;
- (void)addDeviceInfo:(id)a0;
- (void)addTopic:(id)a0;
- (void)clearDeviceInfos;
- (id)deviceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)deviceInfosCount;
- (id)topicAtIndex:(unsigned long long)a0;

@end
