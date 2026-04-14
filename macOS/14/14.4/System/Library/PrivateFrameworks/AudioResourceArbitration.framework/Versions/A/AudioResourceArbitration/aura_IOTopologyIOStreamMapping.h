@class NSString, NSArray;

@interface AuRA_IOTopologyIOStreamMapping : NSObject <NSCopying>

@property (retain, nonatomic) NSString *hwDeviceUID;
@property (nonatomic) unsigned int hwStreamIndex;
@property (retain, nonatomic) NSArray *channelMappings;
@property (nonatomic) int latencyAdjustment;
@property (nonatomic, getter=isDriftCorrectionEnabled) BOOL driftCorrectionEnabled;
@property (nonatomic) unsigned int driftCorrectionAlgorithm;
@property (nonatomic) unsigned int driftCorrectionQuality;
@property (nonatomic, getter=isLatencyCorrectionEnabled) BOOL latencyCorrectionEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
