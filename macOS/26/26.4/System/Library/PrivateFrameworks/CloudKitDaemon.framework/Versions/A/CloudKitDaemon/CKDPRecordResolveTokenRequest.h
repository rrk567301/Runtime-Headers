@class NSString, NSData, NSMutableArray;

@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying> {
    struct { unsigned char forceFetch : 1; unsigned char shouldFetchRootRecord : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (nonatomic) BOOL hasForceFetch;
@property (nonatomic) BOOL forceFetch;
@property (nonatomic) BOOL hasShouldFetchRootRecord;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (retain, nonatomic) NSMutableArray *rootRecordDesiredKeys;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (retain, nonatomic) NSString *participantId;

+ (id)options;
+ (Class)rootRecordDesiredKeysType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (void)addRootRecordDesiredKeys:(id)a0;
- (void)clearRootRecordDesiredKeys;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)rootRecordDesiredKeysCount;

@end
