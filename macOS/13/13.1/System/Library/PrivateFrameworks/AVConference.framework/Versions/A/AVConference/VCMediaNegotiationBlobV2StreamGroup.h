@class NSMutableArray;

@interface VCMediaNegotiationBlobV2StreamGroup : PBCodable <NSCopying> {
    struct { unsigned char streamGroup : 1; } _has;
}

@property (nonatomic) BOOL hasStreamGroup;
@property (nonatomic) unsigned int streamGroup;
@property (retain, nonatomic) NSMutableArray *payloads;
@property (retain, nonatomic) NSMutableArray *streams;

+ (Class)payloadsType;
+ (Class)streamsType;
+ (id)defaultsForStreamGroup:(unsigned int)a0;
+ (id)defaultsForStreamGroupCustom:(unsigned int)a0;
+ (void)updateParentStreamIDForGroupConfig:(id)a0;
+ (id)negotiationCipherSuiteAsString:(unsigned int)a0;
+ (BOOL)isValidStreamGroupIDFromConfig:(id)a0 defaultConfig:(id)a1;
+ (unsigned int)streamGroupFromStreamGroupID:(unsigned int)a0;
+ (unsigned int)streamGroupIDFromStreamGroup:(unsigned int)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearStreams;
- (void)clearPayloads;
- (void)addPayloads:(id)a0;
- (unsigned long long)payloadsCount;
- (id)payloadsAtIndex:(unsigned long long)a0;
- (void)addStreams:(id)a0;
- (unsigned long long)streamsCount;
- (id)streamsAtIndex:(unsigned long long)a0;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;
- (id)initWithStreamGroupConfig:(id)a0 defaultConfig:(id)a1;
- (id)initWithStreamGroupConfig:(id)a0;
- (int)getStreamGroupConfig:(id *)a0;
- (BOOL)appendStreamsToStreamGroupConfig:(id)a0 streamGroupID:(unsigned int)a1 rtpSampleRates:(id)a2;
- (BOOL)isDefaultPayloadConfigsWithStreamGroupConfig:(id)a0;
- (id)customPayloadConfigStateWithStreamGroupConfig:(id)a0;
- (BOOL)setupStreamsWithGroupConfig:(id)a0;
- (BOOL)isUsedPayloadConfigAtIndex:(id)a0 streamGroupConfig:(id)a1 rtpTimestampRate:(unsigned int *)a2;
- (BOOL)setupPayloadsWithGroupConfig:(id)a0;
- (BOOL)updatePayloadConfigsWithStreamGroupConfig:(id)a0 rtpSampleRates:(id)a1;
- (void)updateDefaultPayloadConfigsWithConfig:(id)a0 rtpSampleRates:(id)a1;

@end
