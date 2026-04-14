@interface IMSharedMessageSendingUtilities : NSObject

@property long long serviceAvailability;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)_setupAccountMonitor;

- (BOOL)isiMessageEnabled;
- (BOOL)_hasSMSCapability;
- (BOOL)_canSendText;
- (id)_managedConfigAppAllowlist;
- (void)_updateServiceAvailability;
- (BOOL)isMMSEnabled;
- (BOOL)_isiMessageSupported;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (BOOL)canSendText;
- (BOOL)isSupportedAttachmentUTI:(id)a0;
- (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;

@end
