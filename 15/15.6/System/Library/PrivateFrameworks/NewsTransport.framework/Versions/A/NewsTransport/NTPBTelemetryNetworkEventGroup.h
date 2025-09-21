@class NSString, NSMutableArray;

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying> {
    struct { unsigned char cellularRadioAccessTechnology : 1; unsigned char eventType : 1; unsigned char wifiReachabilityStatus : 1; } _has;
}

@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) char hasWifiReachabilityStatus;
@property (nonatomic) char wifiReachabilityStatus;
@property (nonatomic) char hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (readonly, nonatomic) char hasRespondingPop;
@property (retain, nonatomic) NSString *respondingPop;
@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)failuresType;
+ (Class)successesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)failuresCount;
- (void)addFailures:(id)a0;
- (void)clearFailures;
- (id)failuresAtIndex:(unsigned long long)a0;
- (int)StringAsCellularRadioAccessTechnology:(id)a0;
- (void)addSuccesses:(id)a0;
- (id)cellularRadioAccessTechnologyAsString:(int)a0;
- (void)clearSuccesses;
- (id)successesAtIndex:(unsigned long long)a0;
- (unsigned long long)successesCount;

@end
