@class NSView;

@interface AOSUIAccountContactInviteMessageViewModel : AOSUIAccountContactBaseViewModel {
    char _shouldEnableFirstButtonOnLoad;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) NSView *messageBubbleView;

- (void).cxx_destruct;
- (void)setContentView:(id)a0;
- (id)contentView;
- (id)initWithModel:(id)a0;
- (void)setTemplateContentViewLayout:(long long)a0;
- (char)shouldEnableFirstButtonOnLoad;
- (long long)templateContentViewLayout;

@end
