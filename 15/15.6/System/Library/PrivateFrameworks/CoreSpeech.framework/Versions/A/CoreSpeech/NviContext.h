@class NSDictionary, NSString;

@interface NviContext : NSObject

@property (retain, nonatomic) NSDictionary *voiceTriggerInfo;
@property (nonatomic) char requestHistoricalAudio;
@property (nonatomic) unsigned long long reqStartAudioSampleId;
@property (nonatomic) unsigned long long reqStartMachAbsTime;
@property (nonatomic) char shouldLogRawSensorData;
@property (retain, nonatomic) NSString *rootLogDir;

- (id)description;
- (void).cxx_destruct;

@end
