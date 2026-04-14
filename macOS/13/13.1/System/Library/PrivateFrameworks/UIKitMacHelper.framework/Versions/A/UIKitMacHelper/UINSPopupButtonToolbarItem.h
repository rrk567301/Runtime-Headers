@class NSString, NSArray, NSPopUpButton;
@protocol UINSAccessibilityInfo, UINSMenu, NSUIImage;

@interface UINSPopupButtonToolbarItem : UINSToolbarItem <UINSPopupButtonToolbarItem> {
    NSPopUpButton *_popupButton;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) id<NSUIImage> helperImage;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) id<UINSMenu> menu;
@property (retain, nonatomic) NSArray *menuItems;
@property (nonatomic) BOOL showsArrow;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

@end
