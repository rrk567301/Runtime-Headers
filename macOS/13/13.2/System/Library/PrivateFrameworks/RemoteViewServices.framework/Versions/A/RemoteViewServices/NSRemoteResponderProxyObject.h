@class NSLocalWindowWrappingRemoteWindow;

@interface NSRemoteResponderProxyObject : NSObject

@property SEL action;
@property (retain) NSLocalWindowWrappingRemoteWindow *remoteWindow;
@property BOOL respondsToValidateMenuItem;
@property BOOL respondsToValidateUserInterfaceItem;
@property BOOL validateMenuItemAnswer;
@property BOOL validateUserInterfaceItemAnswer;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (BOOL)_validateUserInterfaceItem:(id)a0 type:(unsigned long long)a1;

@end
