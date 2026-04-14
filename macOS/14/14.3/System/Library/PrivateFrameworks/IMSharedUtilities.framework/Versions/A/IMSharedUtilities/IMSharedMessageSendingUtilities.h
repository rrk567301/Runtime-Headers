@interface IMSharedMessageSendingUtilities : NSObject

@property long long serviceAvailability;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)_setupAccountMonitor;

- (BOOL)isiMessageEnabled;
- (BOOL)_canSendText;
- (BOOL)_hasSMSCapability;
- (BOOL)_isiMessageSupported;
- (id)_managedConfigAppAllowlist;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (void)_updateServiceAvailability;
- (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;
- (BOOL)canSendText;
- (BOOL)isMMSEnabled;
- (BOOL)isSupportedAttachmentUTI:(id)a0;

@end
