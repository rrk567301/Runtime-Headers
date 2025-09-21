@interface AutomationBrowserWindow : BrowserWindow

@property (readonly, nonatomic) BOOL sendingSynthesizedEvent;
@property (readonly, nonatomic) BOOL sendingAllowedEvent;

- (void)sendEvent:(id)a0;
- (void)postEvent:(id)a0 atStart:(BOOL)a1;

@end
