@class NSString, NSMutableArray;

@interface AWDSymptomsNetworkTCPFlowThroughputEstimator : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char networkType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (readonly, nonatomic) char hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) char hasSourceAppIdentifier;
@property (retain, nonatomic) NSString *sourceAppIdentifier;
@property (retain, nonatomic) NSMutableArray *flowThroughputEvents;

+ (Class)flowThroughputEventType;

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
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (void)addFlowThroughputEvent:(id)a0;
- (void)clearFlowThroughputEvents;
- (id)flowThroughputEventAtIndex:(unsigned long long)a0;
- (unsigned long long)flowThroughputEventsCount;

@end
