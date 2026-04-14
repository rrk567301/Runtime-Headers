@class ASDTExclavesSensorManager, NSString, NSDictionary;

@interface ASDTExclavesStream : ASDTStream <ASDTStatusProtocol> {
    struct unique_ptr<ASDT::Exclaves::AudioBuffer, std::default_delete<ASDT::Exclaves::AudioBuffer>> { struct AudioBuffer *__ptr_; } _audioBuffer;
    struct unique_ptr<ASDT::Exclaves::InboundBuffer, std::default_delete<ASDT::Exclaves::InboundBuffer>> { struct InboundBuffer *__ptr_; } _inboundBuffer;
    struct unique_ptr<ASDT::Ramper, std::default_delete<ASDT::Ramper>> { struct Ramper *__ptr_; } _ramper;
}

@property (nonatomic) unsigned int exclavesBufferSize;
@property (retain, nonatomic) ASDTExclavesSensorManager *exclavesSensorManager;
@property (nonatomic) BOOL nonSecureStreamStarted;
@property (retain, nonatomic) NSString *exclavesBufferName;
@property (readonly, nonatomic) BOOL usesExclavesAudioBuffer;
@property (readonly, nonatomic) NSDictionary *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ioThreadStateChange:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)ioBufferSize;
- (void)clearBuffer;
- (id /* block */)readInputBlock;
- (id /* block */)writeMixBlock;
- (BOOL)allocExclavesAudioBuffer:(unsigned int)a0;
- (void *)exclavesAudioBuffer;
- (void *)exclavesInboundBuffer;
- (id /* block */)exclavesReadInput;
- (void *)exclavesStatusTracker;
- (id /* block */)exclavesWriteMix;
- (void)freeExclavesAudioBuffer;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (id)initWithDirection:(unsigned int)a0 withDevice:(id)a1;
- (int)pmIdleStream:(int)a0;
- (int)pmPrepareStream:(int)a0;
- (void *)ramper;
- (BOOL)unexpectedSensorStatus:(int)a0;
- (void)updateSensorForIOThreadStateChange:(id)a0;

@end
