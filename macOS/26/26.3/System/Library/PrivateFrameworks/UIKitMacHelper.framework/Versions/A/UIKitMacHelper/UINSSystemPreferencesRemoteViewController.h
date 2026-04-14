@interface UINSSystemPreferencesRemoteViewController : NSRemoteViewController {
    BOOL _isObserving;
}

+ (void)remoteViewControllerWithCompletionHandler:(id /* block */)a0;

- (void)_startObserving;
- (void)dealloc;
- (void)_stopObserving;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
