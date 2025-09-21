@class NSString;

@interface AOSUInheritanceInvitationViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldShowHelpLinkAsTemplateButton;
    NSString *_title;
    NSString *_detailText;
    NSString *_recipientHandle;
    NSString *_ownerHandle;
    long long _templateContentViewLayout;
}

- (id)title;
- (id)initWithModel:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)detailText;
- (void)setOwnerHandle:(id)a0;
- (id)ownerHandle;
- (void)setDetailText:(id)a0;
- (id)recipientHandle;
- (void)setRecipientHandle:(id)a0;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldShowHelpLinkAsTemplateButton;
- (long long)templateContentViewLayout;

@end
