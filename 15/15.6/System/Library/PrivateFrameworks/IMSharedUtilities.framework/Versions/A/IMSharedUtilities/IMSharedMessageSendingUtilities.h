@protocol IMServiceAvailabilityMonitoring;

@interface IMSharedMessageSendingUtilities : NSObject

@property long long serviceAvailability;
@property (retain, nonatomic) id<IMServiceAvailabilityMonitoring> serviceAvailabilityMonitor;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)isiMessageEnabled;
- (id)_allSubscriptions;
- (char)_canSendText;
- (char)_hasSMSCapability;
- (char)_hasSubscriptionPassingTest:(id /* block */)a0;
- (char)_isiMessageSupported;
- (id)_managedConfigAppAllowlist;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (void)_updateServiceAvailability;
- (char)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;
- (char)canSendText;
- (char)isMMSEnabled;
- (char)isMessagingEnabled;
- (char)isRBMEnabled;
- (char)isRBMSupported;
- (char)isRCSEnabled;
- (char)isRichMessagingEnabled;
- (char)isSupportedAttachmentUTI:(id)a0;

@end
