@class NSArray;
@protocol AMActivatingWindowHandlerDelegate;

@interface AMActivatingWindowHandler : NSObject

@property (class, readonly, copy, nonatomic) NSArray *_windowActivationNotifications;

@property (nonatomic) BOOL _didActivateApplication;
@property (weak, nonatomic) id<AMActivatingWindowHandlerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)_configureActivationWatching;
- (void)_handleWindowActivationNotification:(id)a0;

@end
