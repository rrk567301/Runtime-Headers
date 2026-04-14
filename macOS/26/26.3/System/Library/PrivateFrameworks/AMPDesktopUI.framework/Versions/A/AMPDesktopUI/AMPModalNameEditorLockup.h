@class NSTextField, NSImageView, CNAvatarImageRenderer, NSTimer;
@protocol CNCancelable;

@interface AMPModalNameEditorLockup : AMPBindableView

@property (retain, nonatomic) CNAvatarImageRenderer *monogramRenderer;
@property (retain, nonatomic) id<CNCancelable> rendererToken;
@property (retain, nonatomic) NSImageView *monogramImageView;
@property (retain, nonatomic) NSTextField *userName;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL enabled;

- (void)textChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateMonogram:(id)a0;
- (id)fetchUsername;
- (id)initWithDefaultName:(id)a0;

@end
