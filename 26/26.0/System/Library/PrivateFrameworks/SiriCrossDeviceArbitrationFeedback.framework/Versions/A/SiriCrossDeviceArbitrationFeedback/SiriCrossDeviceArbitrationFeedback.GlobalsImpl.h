@class NSString, _TtC34SiriCrossDeviceArbitrationFeedback11GlobalsImpl;

@interface SiriCrossDeviceArbitrationFeedback.GlobalsImpl : NSObject <SiriCrossDeviceArbitrationFeedback.Globals> {
    void /* function */ localDeviceAssistantIdentifier;
}

@property (class, nonatomic, readonly) _TtC34SiriCrossDeviceArbitrationFeedback11GlobalsImpl *shared;

@property (nonatomic) double historyLengthSeconds;
@property (nonatomic, readonly) BOOL isInternalInstall;
@property (nonatomic, copy) NSString *localDeviceAssistantIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
