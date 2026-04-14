@class NSMutableData;

@interface ASDTNullStream : ASDTStream

@property (retain, nonatomic) NSMutableData *streamBuffer;
@property (nonatomic) unsigned long long clientPosition;

- (void).cxx_destruct;
- (unsigned int)ioBufferSize;
- (void)startStream;
- (void)stopStream;
- (BOOL)changePhysicalFormat:(id)a0;
- (void)setPhysicalFormat:(id)a0;
- (char *)ioBuffer;
- (id /* block */)updateClientPositionBlock;
- (void)configureStreamBuffer;

@end
