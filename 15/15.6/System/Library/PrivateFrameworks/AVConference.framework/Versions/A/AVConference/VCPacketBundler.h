@interface VCPacketBundler : NSObject {
    char *_buffer;
    unsigned int _bufferSize;
    unsigned int _maxPacketSize;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    unsigned int _packetsPerBundle;
    unsigned int _encodedBufferSize;
    unsigned int _accessUnitDataSectionSize;
    char _currentBundleVoiceActivity;
    char _lastBundleVoiceActivity;
    struct tagAccessUnitHeaderInfo { unsigned short accessUnitCount; unsigned short accessUnitSize[3]; } _accessUnitHeaderInfo;
    int _operatingMode;
    struct opaqueVCPacketBundlerCdrxBundleInfo { struct tagVCPacketBundlerPacketInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; char x4; } x0[2]; char x1; struct tagVCAudioPacketBundlerCDRXStateParameters { struct tagVCAudioPacketBundlerCDRXInfo { unsigned char x0; unsigned short x1; } x0[8]; unsigned char x1; } x2; struct opaqueCMSimpleQueue *x3; } *_cdrxBundleInfoRef;
    char _shouldSendPacket;
    int _numBufferedSamples;
}

@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) char allowLargePackets;
@property (nonatomic) int payload;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) int bundlingScheme;
@property (readonly, nonatomic) unsigned int packetsPerBundle;
@property (readonly, nonatomic) char *encodedBuffer;
@property (readonly, nonatomic) unsigned int encodedBufferSize;
@property (readonly, nonatomic) unsigned int bundledPackets;
@property (readonly, nonatomic) char isFull;
@property (readonly, nonatomic) char isTalkSpurtStart;
@property (readonly, nonatomic) unsigned char priority;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)resetBuffer;
- (char)_copyInputBytes:(void *)a0 numInputBytes:(unsigned int)a1 payloadType:(int)a2 timestamp:(unsigned int)a3;
- (char *)accessUnitDataSectionHead;
- (unsigned int)accessUnitHeaderSectionSize;
- (unsigned int)accessUnitHeaderSectionSizeMaximum;
- (char)allocateBundleBuffer:(unsigned int)a0;
- (char)bundleAudioLegacy:(void *)a0 numInputBytes:(unsigned int)a1 payloadType:(int)a2 timestamp:(unsigned int)a3;
- (char)bundleAudioRFC3640:(void *)a0 numInputBytes:(unsigned int)a1 payloadType:(int)a2 timestamp:(unsigned int)a3;
- (unsigned int)bundleBufferSizeWidthMaxPacketSize:(unsigned int)a0 maxPacketCount:(unsigned int)a1;
- (char *)encodedBufferForRFC3640;
- (unsigned int)encodedBufferSizeForRFC3640;
- (void)initLock;
- (id)initWithOperatingMode:(int)a0 bundlingScheme:(int)a1;
- (char)reallocateBufferWithMaxPacketSize:(unsigned int)a0 maxPacketCount:(unsigned int)a1;
- (char)setPacketsPerBundle:(unsigned int)a0;

@end
