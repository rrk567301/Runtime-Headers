@interface ASDTIOA2Stream : ASDTStream {
    char *_ioBuffer;
    unsigned int _ioBufferByteSize;
}

@property (nonatomic) BOOL marked;
@property (readonly, nonatomic) unsigned int userClientID;

- (unsigned int)ioBufferSize;
- (BOOL)changePhysicalFormat:(id)a0;
- (id)physicalFormat;
- (void)setPhysicalFormat:(id)a0;
- (void)_buildFormatList;
- (void)_mapIOBuffer;
- (void)_pushActiveState;
- (void)_releaseIOBuffer;
- (void)_synchronizeWithHardware;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 direction:(unsigned int)a2;
- (char *)ioBuffer;
- (id)ioa2Device;
- (id /* block */)updateClientPositionBlock;

@end
