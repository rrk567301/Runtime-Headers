@class ASDTExclavesSensorManager, NSString, NSDictionary;

@interface ASDTExclavesStream : ASDTStream <ASDTStatusProtocol> {
    struct unique_ptr<ASDT::Exclaves::AudioBuffer, std::default_delete<ASDT::Exclaves::AudioBuffer>> { struct { struct AudioBuffer *__ptr_; } ; } _audioBuffer;
    struct unique_ptr<ASDT::Exclaves::InboundBuffer, std::default_delete<ASDT::Exclaves::InboundBuffer>> { struct { struct InboundBuffer *__ptr_; } ; } _inboundBuffer;
    struct unique_ptr<ASDT::Ramper, std::default_delete<ASDT::Ramper>> { struct { struct Ramper *__ptr_; } ; } _ramper;
    struct unique_ptr<ASDT::StreamFormatConverter, std::default_delete<ASDT::StreamFormatConverter>> { struct { struct StreamFormatConverter *__ptr_; } ; } _streamFormatConverter;
}

@property (nonatomic) unsigned int exclavesBufferSize;
@property (retain, nonatomic) ASDTExclavesSensorManager *exclavesSensorManager;
@property (nonatomic) BOOL nonSecureStreamStarted;
@property (nonatomic) BOOL usesVirtualFormatForIO;
@property (nonatomic) BOOL isLinearBuffer;
@property (retain, nonatomic) NSString *exclavesBufferName;
@property (readonly, nonatomic) BOOL usesExclavesAudioBuffer;
@property (readonly, nonatomic) NSDictionary *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ioThreadStateChange:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)ioBufferSize;
- (void)clearBuffer;
- (id /* block */)readInputBlock;
- (id /* block */)writeMixBlock;
- (id /* block */)convertMixBlock;
- (BOOL)allocExclavesAudioBuffer:(unsigned int)a0;
- (void *)exclavesAudioBuffer;
- (void *)exclavesInboundBuffer;
- (id /* block */)exclavesReadInput;
- (void *)exclavesStatusTracker;
- (void)freeExclavesAudioBuffer;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (id)initWithDirection:(unsigned int)a0 withDevice:(id)a1;
- (int)pmIdleStream:(int)a0;
- (int)pmPrepareStream:(int)a0;
- (id /* block */)processIsolatedOutputMix;
- (void *)ramper;
- (struct StreamFormatConverter { void /* function */ **x0; struct OpaqueAudioConverter *x1; } *)streamFormatConverter;
- (BOOL)unexpectedSensorStatus:(int)a0;
- (void)updateSensorForIOThreadStateChange:(id)a0;

@end
