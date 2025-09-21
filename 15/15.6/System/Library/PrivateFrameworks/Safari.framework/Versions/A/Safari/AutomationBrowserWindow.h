@interface AutomationBrowserWindow : BrowserWindow

@property (readonly, nonatomic) char sendingSynthesizedEvent;
@property (readonly, nonatomic) char sendingAllowedEvent;

- (void)postEvent:(id)a0 atStart:(char)a1;
- (void)sendEvent:(id)a0;

@end
