@class NSString, NSData, NSMutableArray;

@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying> {
    struct { unsigned char forceFetch : 1; unsigned char shouldFetchRootRecord : 1; } _has;
}

@property (readonly, nonatomic) char hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (nonatomic) char hasForceFetch;
@property (nonatomic) char forceFetch;
@property (nonatomic) char hasShouldFetchRootRecord;
@property (nonatomic) char shouldFetchRootRecord;
@property (retain, nonatomic) NSMutableArray *rootRecordDesiredKeys;
@property (readonly, nonatomic) char hasParticipantId;
@property (retain, nonatomic) NSString *participantId;

+ (id)options;
+ (Class)rootRecordDesiredKeysType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addRootRecordDesiredKeys:(id)a0;
- (void)clearRootRecordDesiredKeys;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)rootRecordDesiredKeysCount;

@end
