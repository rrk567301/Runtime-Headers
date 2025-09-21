@class NSString, SOSRLanguageItem;

@interface SOSRLanguageRow : NSObject {
    char _selected;
}

@property (getter=isGroupRow) char groupRow;
@property (getter=isSelected) char selected;
@property unsigned long long tableIndex;
@property (readonly, retain) NSString *title;
@property (readonly, retain) SOSRLanguageItem *srLanguageItem;

+ (id)arrangedRowsFromSRLanguageItems:(id)a0 groupCountries:(char)a1 useLanguageCodeOnlyToSelectItems:(char)a2 showCurrentLocaleAtTop:(char)a3;

- (void)dealloc;
- (id)description;
- (id)initWithTitle:(id)a0 srLanguageItem:(id)a1;
- (void)setSelectedUsingLanguageCodeOnlyToSelectItems:(char)a0;

@end
