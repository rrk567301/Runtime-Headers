@class IMKKeyboard, NSString, NSMenu, NSObject;
@protocol IMKKeyboardServiceDelegate;

@interface IMKKeyboardService : NSObject

@property (weak, nonatomic) NSObject<IMKKeyboardServiceDelegate> *delegate;
@property (readonly, nonatomic) IMKKeyboard *keyboard;
@property (readonly, nonatomic) NSMenu *menu;
@property (copy, nonatomic) NSString *inputMode;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;

@end
