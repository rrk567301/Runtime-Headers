@class NSString;

@interface LiveSpeechCaptionsClient : NSObject {
    void /* unknown type, empty encoding */ isLiveSpeechRunning;
    void /* unknown type, empty encoding */ isLiveCaptionsRunning;
}

@property (class, nonatomic, readonly) LiveSpeechCaptionsClient *shared;

@property (nonatomic, readonly) NSString *serviceName;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
