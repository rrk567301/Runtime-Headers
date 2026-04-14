@interface IMSharedMessageSendingUtilities : NSObject

@property long long serviceAvailability;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)_setupAccountMonitor;

- (BOOL)isiMessageEnabled;
- (BOOL)_hasSMSCapability;
- (BOOL)_canSendText;
- (void)_updateServiceAvailability;
- (id)_managedConfigAppAllowlist;
- (BOOL)canSendText;
- (BOOL)isMMSEnabled;
- (BOOL)isSupportedAttachmentUTI:(id)a0;
- (BOOL)_isiMessageSupported;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;

@end
