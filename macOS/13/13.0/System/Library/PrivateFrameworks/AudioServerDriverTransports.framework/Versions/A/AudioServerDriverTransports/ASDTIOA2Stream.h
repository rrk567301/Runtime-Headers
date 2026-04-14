@interface ASDTIOA2Stream : ASDTStream {
    char *_ioBuffer;
    unsigned int _ioBufferByteSize;
}

@property (nonatomic) BOOL marked;
@property (readonly, nonatomic) unsigned int userClientID;

- (unsigned int)ioBufferSize;
- (BOOL)changePhysicalFormat:(id)a0;
- (void)setPhysicalFormat:(id)a0;
- (id)physicalFormat;
- (id)ioa2Device;
- (char *)ioBuffer;
- (id /* block */)updateClientPositionBlock;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 direction:(unsigned int)a2;
- (void)_pushActiveState;
- (void)_mapIOBuffer;
- (void)_releaseIOBuffer;
- (void)_synchronizeWithHardware;
- (void)_buildFormatList;

@end
