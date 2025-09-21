@interface UINSSystemPreferencesRemoteViewController : NSRemoteViewController {
    BOOL _isObserving;
}

+ (void)remoteViewControllerWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (void)_startObserving;
- (void)_stopObserving;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
