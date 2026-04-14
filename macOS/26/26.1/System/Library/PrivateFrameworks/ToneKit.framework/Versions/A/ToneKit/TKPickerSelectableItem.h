@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (nonatomic, setter=_setShouldTintText:) BOOL shouldTintText;
@property (copy, nonatomic, setter=_setDetailText:) NSString *detailText;
@property (nonatomic, setter=_setShowsCheckmark:) BOOL showsCheckmark;
@property (nonatomic, setter=_setShowsDisclosureIndicator:) BOOL showsDisclosureIndicator;
@property (nonatomic, setter=_setShouldPreventSelection:) BOOL shouldPreventSelection;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
