@class NSArray, NSMenuItem;

@interface EKUIVirtualConferencePopupButton : EKUIPopUpButton {
    NSMenuItem *_defaultVirtualConferenceItem;
}

@property (copy, nonatomic) id /* block */ roomTypeSelected;
@property (copy, nonatomic) NSArray *roomTypes;

+ (Class)cellClass;
+ (id)_parentAppBundleIdentifierForExtensionBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)itemSelected:(id)a0;
- (void)selectDefaultItem;
- (void)populateRoomTypeMenu;

@end
