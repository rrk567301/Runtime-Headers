@class ASDTIOA2Device;

@interface ASDTIOA2Stream : ASDTStream {
    char *_ioBuffer;
    unsigned int _ioBufferByteSize;
}

@property (readonly, weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) BOOL marked;
@property (readonly, nonatomic) unsigned int userClientID;

- (void)dealloc;
- (unsigned int)ioBufferSize;
- (BOOL)changePhysicalFormat:(id)a0;
- (BOOL)deviceChangedToSamplingRate:(double)a0;
- (id)physicalFormat;
- (void)setPhysicalFormat:(id)a0;
- (void)setPhysicalFormats:(id)a0;
- (char *)ioBuffer;
- (id /* block */)updateClientPositionBlock;
- (void)setPhysicalFormat:(id)a0 alwaysNotify:(BOOL)a1;
- (BOOL)_mapIOBuffer;
- (void)_pushActiveState;
- (void)_releaseIOBuffer;
- (void)_synchronizeWithHardware;
- (void)asyncDeviceChangedToSamplingRate:(double)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 direction:(unsigned int)a2;

@end
