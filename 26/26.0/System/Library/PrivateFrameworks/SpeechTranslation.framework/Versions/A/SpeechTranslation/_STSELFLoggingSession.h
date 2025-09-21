@class _LTLocalePair, NSUUID;

@interface _STSELFLoggingSession : NSObject {
    NSUUID *_sessionID;
    BOOL _isActive;
}

@property (readonly, nonatomic) _LTLocalePair *localePair;
@property (nonatomic) BOOL ttsPlaybackEnabled;

- (void).cxx_destruct;
- (id)initWithLocalePair:(id)a0;
- (void)logSessionStart;
- (void)logSessionEnd:(id)a0;

@end
