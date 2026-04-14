@class NSButton;

@interface NSToolbarCloudSharingItem : NSToolbarItem {
    NSButton *_button;
}

+ (id)_addPeopleImage;
+ (id)_showPeopleImage;

- (void)validate;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setShared:(BOOL)a0;

@end
