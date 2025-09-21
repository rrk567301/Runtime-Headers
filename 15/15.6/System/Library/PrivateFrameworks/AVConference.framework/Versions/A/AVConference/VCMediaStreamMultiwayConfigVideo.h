@class NSMutableSet, NSMutableArray;

@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig

@property (nonatomic) long long resolution;
@property (nonatomic) unsigned int framerate;
@property (readonly, nonatomic) NSMutableSet *payloads;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (readonly, nonatomic) NSMutableArray *subStreamConfigs;
@property (nonatomic) char isTemporalStream;
@property (nonatomic) char isSubStream;
@property (nonatomic) unsigned short parentStreamID;

- (void)dealloc;
- (id)init;
- (id)streamIds;
- (void)addPayload:(int)a0;
- (void)addSubStreamConfig:(id)a0;

@end
