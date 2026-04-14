@class NSString, NSView, NSImage, _SWCollaborationButtonViewImpl;
@protocol NSCloudSharingServiceDelegate, SWCollaborationViewDelegate;

@interface SWCollaborationView : NSView

@property (nonatomic, readonly) _SWCollaborationButtonViewImpl *buttonView;
@property (retain, nonatomic) _SWCollaborationButtonViewImpl *buttonView;
@property (retain, nonatomic) NSView *typeErasedButtonView;
@property (retain, nonatomic) NSView *typeErasedButtonView;
@property (weak) id<NSCloudSharingServiceDelegate> cloudSharingDelegate;
@property (nonatomic) unsigned long long activeParticipantCount;
@property (weak, nonatomic) id<SWCollaborationViewDelegate> delegate;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubtitle;
@property (retain, nonatomic) NSImage *headerImage;
@property (weak, nonatomic) id<NSCloudSharingServiceDelegate> cloudSharingServiceDelegate;
@property (copy, nonatomic) NSString *manageButtonTitle;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)a0;
- (void)setContentView:(id)a0;
- (void)dismissPopover:(id /* block */)a0;
- (id)initWithItemProvider:(id)a0;
- (void)setShowManageButton:(BOOL)a0;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithButtonView:(id)a0;
- (id)initWithTypeErasedButtonView:(id)a0;

@end
