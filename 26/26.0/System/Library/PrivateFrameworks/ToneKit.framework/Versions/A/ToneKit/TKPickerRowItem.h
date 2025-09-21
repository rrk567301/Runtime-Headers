@interface TKPickerRowItem : TKPickerItem

@property (nonatomic, setter=_setRow:) long long row;
@property (nonatomic, setter=_setWantsIndentedLayout:) BOOL wantsIndentedLayout;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
