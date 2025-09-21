@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (nonatomic, setter=_setShouldTintText:) char shouldTintText;
@property (copy, nonatomic, setter=_setDetailText:) NSString *detailText;
@property (nonatomic, setter=_setShowsCheckmark:) char showsCheckmark;
@property (nonatomic, setter=_setShowsDisclosureIndicator:) char showsDisclosureIndicator;
@property (nonatomic, setter=_setShouldPreventSelection:) char shouldPreventSelection;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
