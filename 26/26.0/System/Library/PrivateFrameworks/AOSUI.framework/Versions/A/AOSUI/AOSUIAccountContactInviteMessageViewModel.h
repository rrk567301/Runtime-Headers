@class NSView;

@interface AOSUIAccountContactInviteMessageViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldEnableFirstButtonOnLoad;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) NSView *messageBubbleView;

- (void)setContentView:(id)a0;
- (id)initWithModel:(id)a0;
- (id)contentView;
- (void).cxx_destruct;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (long long)templateContentViewLayout;

@end
