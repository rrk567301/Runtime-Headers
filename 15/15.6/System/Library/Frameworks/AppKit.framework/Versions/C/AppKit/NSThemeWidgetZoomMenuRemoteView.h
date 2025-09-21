@protocol NSThemeWidgetZoomMenuRemoteViewDelegate;

@interface NSThemeWidgetZoomMenuRemoteView : NSThemeWidgetRemoteView <WindowSharingDefaultRemoteButtonProtocol> {
    char _runningMenu;
}

@property (weak) id<NSThemeWidgetZoomMenuRemoteViewDelegate> delegate;

+ (id)remoteServiceViewControllerClassName;

- (id)exportedInterface;
- (void)_showMenu:(id)a0 timestamp:(double)a1;
- (void)_stopMenuTracking;
- (id)accessibilityAttributeNames;
- (char)accessibilityIsIgnored;
- (id)accessibilityRoleAttribute;
- (void)cancelShowMenuAfterProcessingEventsBeforeTimestamp:(double)a0;
- (void)didAdvanceToRunPhase;
- (void)menuDidCancel;
- (void)menuDidClose;
- (void)serviceDidInvalidate;
- (id)serviceViewControllerInterface;
- (void)showMenu:(id)a0;

@end
