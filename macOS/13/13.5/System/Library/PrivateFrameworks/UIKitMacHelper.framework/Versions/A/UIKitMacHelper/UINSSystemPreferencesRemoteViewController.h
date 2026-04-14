@interface UINSSystemPreferencesRemoteViewController : NSRemoteViewController {
    BOOL _isObserving;
}

+ (void)remoteViewControllerWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (void)_startObserving;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)_stopObserving;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
