@class NSArray, NSMenuItem;

@interface EKUIVirtualConferencePopupButton : EKUIPopUpButton {
    NSMenuItem *_defaultVirtualConferenceItem;
}

@property (copy, nonatomic) id /* block */ roomTypeSelected;
@property (copy, nonatomic) NSArray *roomTypes;

+ (Class)cellClass;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)itemSelected:(id)a0;
- (void)populateRoomTypeMenu;
- (void)selectDefaultItem;

@end
