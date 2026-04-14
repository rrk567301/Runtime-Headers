@class NSString;

@interface ASDTStreamSessionWrapper : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL valid;
@property (nonatomic) void *streamSession;

+ (id)keyAudioErrorConcealmentMode;
+ (id)keyAudioFrameSize;
+ (id)keyAudioFrameSizeAlignment;
+ (id)keyAudioGlyph;
+ (id)keyBufferSizeAlignment;
+ (id)keyCacheMode;
+ (id)keyFrameHeight;
+ (id)keyFrameWidth;
+ (id)keyIOSurfacesArray;
+ (id)keyIOSurfacesCount;
+ (id)keyIsRemote;
+ (id)keyLocalStreamRequirements;
+ (id)keyMSGSyncID;
+ (id)keyReinitSessionAtWake;
+ (id)keyRemoteStreamRequirements;
+ (id)keySessionLoopback;
+ (id)keyStreamID;
+ (id)keySupportedPixelFormats;
+ (id)keyTxP2PDataTimeoutUsec;
+ (id)keyUniqueClientCode;
+ (id)keyVerboseLogging;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)start;
- (void)stop;
- (id)initWithAttributes:(id)a0;
- (BOOL)setAttribute:(id)a0 forKey:(id)a1;
- (int)doStart;
- (BOOL)checkValid:(const char *)a0;
- (int)createErrorSleepTimeMs;
- (BOOL)createWithAttributes:(id)a0;
- (int)doCreateWithAttributes:(id)a0;
- (int)doGetAttribute:(const void **)a0 forKey:(id)a1;
- (int)doGetRXSyncNoDataCount:(unsigned int *)a0 andClearIt:(BOOL)a1;
- (void)doInvalidate;
- (int)doSetAttribute:(id)a0 forKey:(id)a1;
- (int)doStop;
- (id)getAttributeForKey:(id)a0;
- (unsigned int)getRXSyncNoDataCount:(BOOL)a0;
- (void)setValidForResult:(int)a0;

@end
