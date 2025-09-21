@class NSString;

@interface WFTextFieldConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isSecureTextEntry) char secureTextEntry;
@property (nonatomic, getter=isMultiline) char multiline;
@property (nonatomic) char allowsNegativeNumbers;
@property (nonatomic) char autoPeriodsDisabled;
@property (nonatomic) char smartQuotesDisabled;
@property (nonatomic) char smartDashesDisabled;
@property (nonatomic) char textReplacementDisabled;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *clearButtonMode;
@property (copy, nonatomic) NSString *autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionType;
@property (copy, nonatomic) NSString *returnKeyType;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) NSString *textAlignment;
@property (nonatomic) char focusImmediatelyWhenPresented;
@property (nonatomic) long long initialInsertionIndex;
@property (nonatomic) char showsDateFormattingHint;
@property (nonatomic) unsigned long long dateFormatStyle;
@property (nonatomic) unsigned long long timeFormatStyle;
@property (nonatomic) char dateHintPrefersDateOnly;
@property (nonatomic) char doesRelativeDateFormatting;
@property (copy, nonatomic) NSString *localizedIncompleteHintString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
