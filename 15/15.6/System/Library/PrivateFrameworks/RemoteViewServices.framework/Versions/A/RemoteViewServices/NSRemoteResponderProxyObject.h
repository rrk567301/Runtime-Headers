@class NSLocalWindowWrappingRemoteWindow;

@interface NSRemoteResponderProxyObject : NSObject

@property SEL action;
@property (retain) NSLocalWindowWrappingRemoteWindow *remoteWindow;
@property char respondsToValidateMenuItem;
@property char respondsToValidateUserInterfaceItem;
@property char validateMenuItemAnswer;
@property char validateUserInterfaceItemAnswer;

- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (char)validateMenuItem:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (char)_validateUserInterfaceItem:(id)a0 type:(unsigned long long)a1;

@end
