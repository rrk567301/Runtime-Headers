@class NSArray, NSImage, NSURL, ETSketchMessage, NSMutableArray;

@interface ETVideoMessage : ETMessage {
    NSMutableArray *_playingMessages;
    double _compressedTimeTotal;
    double _compressedTimeLastEventTime;
    double _messageDuration;
}

@property (retain, nonatomic) NSArray *playingMessages;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) NSImage *stillImage;
@property (retain, nonatomic) ETSketchMessage *introMessage;
@property (nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) BOOL canCompressTime;
@property (nonatomic) BOOL pauseTimeCompression;

+ (unsigned short)messageType;

- (id)init;
- (void).cxx_destruct;
- (id)archiveData;
- (BOOL)isAnimated;
- (double)messageDuration;
- (id)initWithArchiveData:(id)a0;
- (id)messageTypeAsString;
- (unsigned long long)_mediaTypeFromETPVideoType:(int)a0;
- (int)_etpMediaTypeFromETMediaType:(unsigned long long)a0;
- (BOOL)shouldLoopDuringPlayback;
- (double)compressTimeSinceStartOfMessage:(double)a0;

@end
