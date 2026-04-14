@interface UINSSystemPreferencesRemoteViewController : NSRemoteViewController {
    BOOL _isObserving;
}

+ (void)remoteViewControllerWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)_stopObserving;
- (void)_startObserving;

@end
