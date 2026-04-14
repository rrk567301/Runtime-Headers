@class NSString;

@interface ASDTStreamSessionWrapper : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL valid;
@property (nonatomic) void *streamSession;

+ (id)keyStreamID;
+ (id)keyIsRemote;
+ (id)keyFrameWidth;
+ (id)keyFrameHeight;
+ (id)keyReinitSessionAtWake;
+ (id)keyAudioFrameSize;
+ (id)keyAudioGlyph;
+ (id)keyAudioErrorConcealmentMode;
+ (id)keyIOSurfacesCount;
+ (id)keyIOSurfacesArray;
+ (id)keyMSGSyncID;
+ (id)keyTxP2PDataTimeoutUsec;
+ (id)keySessionLoopback;
+ (id)keyVerboseLogging;
+ (id)keyUniqueClientCode;
+ (id)keyBufferSizeAlignment;
+ (id)keyCacheMode;
+ (id)keySupportedPixelFormats;
+ (id)keyRemoteStreamRequirements;
+ (id)keyLocalStreamRequirements;
+ (id)keyAudioFrameSizeAlignment;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)start;
- (void)stop;
- (id)initWithAttributes:(id)a0;
- (BOOL)setAttribute:(id)a0 forKey:(id)a1;
- (unsigned int)getChecksum:(BOOL)a0;
- (unsigned int)getRXSyncNoDataCount:(BOOL)a0;
- (void)doInvalidate;
- (int)createErrorSleepTimeMs;
- (int)doCreateWithAttributes:(id)a0;
- (BOOL)createWithAttributes:(id)a0;
- (BOOL)checkValid:(const char *)a0;
- (void)setValidForResult:(int)a0;
- (int)doSetAttribute:(id)a0 forKey:(id)a1;
- (int)doGetAttribute:(const void **)a0 forKey:(id)a1;
- (id)getAttributeForKey:(id)a0;
- (int)doStart;
- (int)doStop;
- (int)doGetChecksum:(const struct __CFNumber **)a0 andClearIt:(BOOL)a1;
- (int)doGetRXSyncNoDataCount:(unsigned int *)a0 andClearIt:(BOOL)a1;

@end
