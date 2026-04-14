@class NSString, NSDate, AFAnnouncementContext;

@interface _AFAnnouncementContextMutation : NSObject <AFAnnouncementContextMutating> {
    AFAnnouncementContext *_base;
    long long _platform;
    long long _notificationType;
    NSDate *_lastAnnouncementTimestamp;
    BOOL _isSameAppIdAsLastAnnounce;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPlatform : 1; unsigned char hasNotificationType : 1; unsigned char hasLastAnnouncementTimestamp : 1; unsigned char hasIsSameAppIdAsLastAnnounce : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setPlatform:(long long)a0;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setNotificationType:(long long)a0;
- (BOOL)getIsSameAppIdAsLastAnnounce;
- (id)getLastAnnouncementTimestamp;
- (long long)getNotificationType;
- (long long)getPlatform;
- (void)setIsSameAppIdAsLastAnnounce:(BOOL)a0;
- (void)setLastAnnouncementTimestamp:(id)a0;

@end
