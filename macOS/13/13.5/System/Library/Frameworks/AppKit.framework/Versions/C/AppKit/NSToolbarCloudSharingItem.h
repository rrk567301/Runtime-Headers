@class NSButton;

@interface NSToolbarCloudSharingItem : NSToolbarItem {
    NSButton *_button;
}

+ (id)_addPeopleImage;
+ (id)_showPeopleImage;

- (void)dealloc;
- (id)init;
- (void)_setShared:(BOOL)a0;
- (void)validate;

@end
