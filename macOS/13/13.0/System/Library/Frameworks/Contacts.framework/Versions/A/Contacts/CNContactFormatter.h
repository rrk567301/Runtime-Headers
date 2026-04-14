@class NSPersonNameComponentsFormatter;
@protocol CNKeyDescriptor;

@interface CNContactFormatter : NSFormatter <NSSecureCoding> {
    NSPersonNameComponentsFormatter *_nameFormatter;
}

@property (class, readonly) id<CNKeyDescriptor> descriptorForRequiredKeysForNameOrder;
@property (class, readonly) id<CNKeyDescriptor> descriptorForRequiredKeysForDelimiter;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL ignoresOrganization;
@property (nonatomic) BOOL ignoresNickname;
@property (nonatomic) unsigned long long fallbackStyle;
@property (nonatomic) BOOL emphasizesPrimaryNameComponent;
@property (nonatomic) long long sortOrder;
@property long long style;

+ (id)descriptorForRequiredKeysForStyle:(long long)a0;
+ (id)stringFromContact:(id)a0 style:(long long)a1;
+ (long long)nameOrderForContact:(id)a0;
+ (id)attributedStringFromContact:(id)a0 style:(long long)a1 defaultAttributes:(id)a2;
+ (id)abbreviatedStringFromContact:(id)a0 trimmingWhitespace:(BOOL)a1;
+ (id)delimiterForContact:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)stringFromContact:(id)a0;
- (id)descriptorForRequiredKeys;
- (id)attributedStringFromContact:(id)a0 defaultAttributes:(id)a1;
- (id)stringFromContact:(id)a0 attributes:(id)a1;
- (id)stringFromPotentiallySuggestedContact:(id)a0 relatedToProperty:(id)a1;

@end
