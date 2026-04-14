@class NSDictionary, ASDTAudioDevice;

@interface ASDTStream : ASDStream

@property (weak, nonatomic) ASDTAudioDevice *device;
@property (copy, nonatomic) id /* block */ updateClientPositionCopy;
@property (nonatomic) id /* block */ updateClientPositionUnretained;
@property (nonatomic) unsigned int safetyOffset;
@property (retain, nonatomic) NSDictionary *latencies;

+ (id)streamForConfig:(id)a0 withDevice:(id)a1;

- (void).cxx_destruct;
- (unsigned int)ioBufferSize;
- (void)clearBuffer;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id /* block */)readInputBlock;
- (id /* block */)writeMixBlock;
- (void)updateLatency;
- (void)setPhysicalFormat:(id)a0;
- (char *)ioBuffer;
- (id /* block */)updateClientPositionBlock;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (int)prewarmStream:(int)a0;
- (id)initWithDirection:(unsigned int)a0 withDevice:(id)a1;
- (int)prepareStream:(int)a0;
- (id /* block */)readOrWriteBlock;
- (void)writeZerosToMixMilliseconds:(unsigned int)a0 atSampleTime:(unsigned long long)a1;

@end
