@class NSButton;

@interface NSToolbarCloudSharingItem : NSToolbarItem {
    NSButton *_button;
}

+ (id)_addPeopleImage;
+ (id)_showPeopleImage;

- (void)validate;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setShared:(BOOL)a0;

@end
