@class NSTextField, NSArray, ABCardViewStyleProvider, CNPostalAddress, NSColor;

@interface ABAddressFieldBuilder : NSObject

@property (copy, nonatomic) NSArray *textFieldsArrangedByLine;
@property (copy, nonatomic) NSArray *firstFieldsPerLine;
@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, nonatomic) BOOL fieldsEditable;
@property (readonly, nonatomic) NSColor *textColor;
@property (readonly, nonatomic) NSTextField *streetField;
@property (readonly, copy, nonatomic) NSArray *stackViewsArrangedByLine;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;

+ (unsigned long long)numberOfLinesInPostalAddress:(id)a0 isEditing:(BOOL)a1;

- (void).cxx_destruct;
- (id)countryCode;
- (id)initWithAddress:(id)a0 textColor:(id)a1 fieldsEditable:(BOOL)a2;
- (id)addressLinesFromFormatDictionary:(id)a0;
- (unsigned long long)tagForFormatComponent:(id)a0;
- (id)fieldForAddressComponent:(id)a0 ofDictionary:(id)a1;
- (id)textFieldForAddressComponent:(id)a0 font:(id)a1;
- (void)buildFields;

@end
