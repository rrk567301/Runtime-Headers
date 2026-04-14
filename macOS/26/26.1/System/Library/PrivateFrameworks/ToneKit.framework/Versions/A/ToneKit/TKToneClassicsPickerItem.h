@class TKTonePickerItem;

@interface TKToneClassicsPickerItem : TKTonePickerItem

@property (weak, nonatomic, setter=_setParentItem:) TKTonePickerItem *parentItem;
@property (nonatomic, setter=_setClassicToneIndex:) long long classicToneIndex;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)childItemAtIndex:(long long)a0;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
