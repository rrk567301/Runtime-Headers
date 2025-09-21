@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {
    char _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLGenericAlbum *album;
@property (readonly, nonatomic) char invitationRecordsDidChange;

+ (id)notificationWithAlbum:(id)a0 snapshot:(id)a1;

- (id)name;
- (void).cxx_destruct;
- (id)userInfo;
- (void)_calculateDiffs;

@end
