@class ASKChooseMenuItemEventHandler, ASKUpdateMenuItemEventHandler, NSMenuItem;

@interface ASKMenuEventTarget : NSObject {
    NSMenuItem *_menuItem;
    ASKChooseMenuItemEventHandler *_chooseHandler;
    ASKUpdateMenuItemEventHandler *_updateHandler;
}

+ (id)targetForMenuItem:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)validateMenuItem:(id)a0;
- (void)setUpdateHandler:(id)a0;
- (id)updateHandler;
- (void)action:(id)a0;
- (void)setChooseHandler:(id)a0;
- (id)initWithMenuItem:(id)a0;
- (id)chooseHandler;

@end
