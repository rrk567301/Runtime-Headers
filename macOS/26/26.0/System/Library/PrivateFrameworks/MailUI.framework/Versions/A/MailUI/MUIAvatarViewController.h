@class NSString, NSView, MUIAvatarImageContext, CNAvatarViewController, NSObject;
@protocol OS_os_log, EFCancelable;

@interface MUIAvatarViewController : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) id<EFCancelable> token;
@property (retain, nonatomic) MUIAvatarImageContext *context;
@property (readonly, nonatomic) NSView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContacts:(id)a0;
- (void)updateContacts:(id)a0;
- (id)displayPersonForContext:(id)a0 avatarGenerator:(id)a1;
- (void)updateWithResult:(id)a0;

@end
