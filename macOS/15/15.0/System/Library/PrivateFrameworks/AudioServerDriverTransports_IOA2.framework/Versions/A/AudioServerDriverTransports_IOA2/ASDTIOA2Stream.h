@class ASDTIOA2Device, NSDictionary;

@interface ASDTIOA2Stream : ASDTExclavesStream {
    char *_ioBuffer;
    unsigned int _ioBufferByteSize;
}

@property (readonly, weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) BOOL usesIsolatedIO;
@property (retain, nonatomic) NSDictionary *isolatedIOFormatMap;
@property (nonatomic) BOOL marked;
@property (readonly, nonatomic) unsigned int userClientID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)a0;
- (unsigned int)ioBufferSize;
- (void)setPhysicalFormat:(id)a0;
- (void)setPhysicalFormats:(id)a0;
- (BOOL)changePhysicalFormat:(id)a0;
- (BOOL)deviceChangedToSamplingRate:(double)a0;
- (id)physicalFormat;
- (id /* block */)readIsolatedInputBlock;
- (id /* block */)exclavesReadInput;
- (char *)ioBuffer;
- (int)pmPrepareStream:(int)a0;
- (int)pmPrewarmStream:(int)a0;
- (id /* block */)updateClientPositionBlock;
- (void)setPhysicalFormat:(id)a0 alwaysNotify:(BOOL)a1;
- (BOOL)_mapIOBuffer;
- (void)_releaseIOBuffer;
- (void)_synchronizeWithHardware;
- (void)asyncDeviceChangedToSamplingRate:(double)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 direction:(unsigned int)a2;

@end
