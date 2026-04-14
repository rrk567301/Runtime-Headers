@class NSString, AFHomeAnnouncementSnapshot, AFHomeAnnouncement;

@interface _AFHomeAnnouncementSnapshotMutation : NSObject <AFHomeAnnouncementSnapshotMutating> {
    AFHomeAnnouncementSnapshot *_base;
    unsigned long long _state;
    AFHomeAnnouncement *_lastPlayedAnnouncement;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasState : 1; unsigned char hasLastPlayedAnnouncement : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLastPlayedAnnouncement;
- (unsigned long long)getState;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setLastPlayedAnnouncement:(id)a0;
- (BOOL)isDirty;
- (void)setState:(unsigned long long)a0;

@end
