@class NSNumber, NSString, NSMutableArray;

@interface MXCoreSessionBase : NSObject {
    BOOL _isPlaying;
    BOOL _isRecording;
    NSString *_audioCategory;
    NSString *_audioMode;
}

@property (retain, nonatomic) NSNumber *ID;
@property (nonatomic) unsigned int audioSessionID;
@property (retain, nonatomic) NSNumber *clientPID;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *displayID;
@property (retain, nonatomic) NSString *routingContextUUID;
@property (nonatomic) int coreSessionType;
@property (nonatomic) BOOL reporterStarted;
@property (retain, nonatomic) NSMutableArray *reporterIDs;
@property (retain, nonatomic) NSMutableArray *originalReporterIDs;
@property (nonatomic) BOOL isTheAssistant;
@property (nonatomic) float interruptionFadeDuration;
@property (nonatomic) BOOL isActive;
@property (nonatomic) unsigned long long mxSessionIDCounter;

- (void)dealloc;
- (id)init;
- (id)info;
- (BOOL)isPlaying;
- (id)audioCategory;
- (int)setAudioCategory:(id)a0;
- (id)audioMode;
- (int)setAudioMode:(id)a0;
- (int)setIsPlaying:(BOOL)a0;
- (int)setIsRecording:(BOOL)a0;
- (BOOL)isRecording;
- (BOOL)isSidekick;

@end
