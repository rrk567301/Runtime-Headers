@interface TKPickerRowItem : TKPickerItem

@property (nonatomic, setter=_setRow:) long long row;
@property (nonatomic, setter=_setWantsIndentedLayout:) BOOL wantsIndentedLayout;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
