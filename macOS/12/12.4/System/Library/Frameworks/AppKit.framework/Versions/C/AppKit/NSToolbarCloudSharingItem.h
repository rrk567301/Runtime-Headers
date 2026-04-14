@class NSButton;

@interface NSToolbarCloudSharingItem : NSToolbarItem {
    NSButton *_button;
}

+ (id)_showPeopleImage;
+ (id)_addPeopleImage;

- (void)dealloc;
- (id)init;
- (void)_setShared:(BOOL)a0;
- (void)validate;

@end
