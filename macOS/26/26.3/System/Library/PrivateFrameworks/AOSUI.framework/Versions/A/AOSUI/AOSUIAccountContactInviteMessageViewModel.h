@class NSView;

@interface AOSUIAccountContactInviteMessageViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldEnableFirstButtonOnLoad;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) NSView *messageBubbleView;

- (id)contentView;
- (void)setContentView:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (long long)templateContentViewLayout;

@end
