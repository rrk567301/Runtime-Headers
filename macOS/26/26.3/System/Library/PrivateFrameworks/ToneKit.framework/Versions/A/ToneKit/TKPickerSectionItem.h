@class NSString;

@interface TKPickerSectionItem : TKPickerItem

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (copy, nonatomic, setter=_setFooterText:) NSString *footerText;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
