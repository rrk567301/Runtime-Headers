@class NSButton;

@interface NSToolbarCloudSharingItem : NSToolbarItem {
    NSButton *_button;
}

+ (id)_addPeopleImage;
+ (id)_showPeopleImage;

- (void)validate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setShared:(BOOL)a0;

@end
