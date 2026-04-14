@class NSButton;

@interface NSToolbarCloudSharingItem : NSToolbarItem {
    NSButton *_button;
}

+ (id)_addPeopleImage;
+ (id)_showPeopleImage;

- (void)validate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_setShared:(BOOL)a0;

@end
