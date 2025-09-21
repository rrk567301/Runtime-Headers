@class NSSharingExtensionContext, NSString, CKShare, CKContainer;

@interface SOShare : NSObject

@property (copy, setter=setCKShare:) CKShare *ckShare;
@property (copy) CKContainer *ckContainer;
@property (copy) NSSharingExtensionContext *sharingExtensionContext;
@property (copy) NSString *sourceApplicationIdentifier;
@property char canEditFlag;
@property char canInviteParticipantsFlag;

- (void).cxx_destruct;
- (void)_setRecipientArrays:(id)a0 emails:(id)a1 forRecipients:(id)a2;
- (void)_setUpSourceApplicationIdentifier;
- (id)initWithCKShare:(id)a0 containerId:(id)a1 canEditFlag:(char)a2 canInviteParticipants:(char)a3 sharingExtensionContext:(id)a4 sourceApplicationIdentifier:(id)a5;
- (void)passRecipientsToCloudKit:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeRecipientsFromCKShare;
- (void)updateCKShareViaSharingExtensionContext;

@end
