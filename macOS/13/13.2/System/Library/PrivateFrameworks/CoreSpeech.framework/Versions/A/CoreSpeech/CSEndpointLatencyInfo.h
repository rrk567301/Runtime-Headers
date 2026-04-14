@class NSString, NSMutableArray;

@interface CSEndpointLatencyInfo : NSObject

@property (retain, nonatomic) NSMutableArray *trailingPktSpeechLatencies;
@property (retain, nonatomic) NSMutableArray *trailingPktLatencies;
@property (nonatomic) unsigned long long numOfAudioPackets;
@property (nonatomic) unsigned long long numOfValidTrailingPackets;
@property (nonatomic) unsigned long long numOfValidTrailingSpeechPackets;
@property (nonatomic) double firstPktLatency;
@property (retain, nonatomic) NSString *requestMHUUID;

- (void).cxx_destruct;
- (void)report;
- (id)initWithRequestMHUUID:(id)a0;
- (void)addPktInfoWithTimestamp:(unsigned long long)a0 arrivalTimestamp:(unsigned long long)a1 currentMachTime:(unsigned long long)a2;
- (void)_emitMHEndpointLatencyInfo:(id)a0 withRequestMHUUID:(id)a1;

@end
