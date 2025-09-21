@class NSString;
@protocol HMDActiveSiriSessionInfoDelegate, HMDDataStreamBulkSendSession;

@interface HMDActiveSiriSessionInfo : NSObject <HMFLogging>

@property (weak, nonatomic) id<HMDActiveSiriSessionInfoDelegate> delegate;
@property (nonatomic) char didBulkSendSessionFail;
@property (nonatomic) char didBulkSendSessionComplete;
@property (nonatomic) char didSiriSessionStart;
@property (nonatomic) char didSiriSessionStop;
@property (retain, nonatomic) id<HMDDataStreamBulkSendSession> bulkSendSession;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)_bulkSendDidComplete;
- (void)_bulkSendDidFail;
- (void)_doReadAudioFrames;
- (char)_handleFrame:(id)a0;
- (char)_maybeHandleFrame:(id)a0 error:(id)a1;
- (char)isBulkSendActive;
- (char)isSiriSessionActive;
- (void)markSiriPluginReady;
- (void)markSiriPluginStopped;
- (void)readFirstFrame;
- (void)setActiveBulkSendSession:(id)a0;

@end
