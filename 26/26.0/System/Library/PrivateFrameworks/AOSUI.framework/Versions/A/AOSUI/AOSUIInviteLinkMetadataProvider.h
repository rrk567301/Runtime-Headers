@class AAMessagesInviteContext;

@interface AOSUIInviteLinkMetadataProvider : NSObject {
    AAMessagesInviteContext *_context;
    unsigned long long _inviteType;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadMetatadataWithCompletion:(id /* block */)a0;
- (id)_composeBubbleImage;
- (id)_inviteIcon;

@end
