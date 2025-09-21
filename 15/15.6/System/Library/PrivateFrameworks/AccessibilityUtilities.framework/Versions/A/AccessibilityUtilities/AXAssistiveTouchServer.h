@interface AXAssistiveTouchServer : AXServer

+ (id)server;

- (void)closeMenu;
- (char)home;
- (char)_connectIfNecessary;
- (id)_serviceName;
- (id)menuItems;
- (void)menuAction:(id)a0;
- (char)isMenuOpen;
- (char)setPointerPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)virtualPointer:(char)a0;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)currentBubbleElement;
- (struct CGPoint { double x0; double x1; })getMenuItemPosition:(id)a0;
- (struct CGPoint { double x0; double x1; })getNubbitPosition;
- (struct CGPoint { double x0; double x1; })getPointerPosition;
- (void)openMenu;
- (void)pointerClick;
- (void)setNubbitPosition:(struct CGPoint { double x0; double x1; })a0;
- (char)tapMenuItem:(id)a0;

@end
