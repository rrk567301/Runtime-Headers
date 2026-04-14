@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct __CFPhoneNumber { } *_phoneNumberRef;
}

@property (class, readonly) id /* block */ StringValue;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *initialCountryCode;
@property (readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *digits;
@property (readonly, copy) NSString *formattedStringValue;
@property (readonly, copy) NSString *formattedInternationalStringValue;
@property (readonly, copy) NSString *unformattedInternationalStringValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)phoneNumberWithStringValue:(id)a0;
+ (id)defaultCountryCode;
+ (id)phoneNumberWithDigits:(id)a0 countryCode:(id)a1;
+ (id)phoneNumberWithCopiedStringValue:(id)a0;
+ (struct __CFPhoneNumber { } *)createCFPhoneNumberForStringValue:(id)a0 countryCode:(id)a1;
+ (id)unsupportedCountryCodes;
+ (id)dialingCodeForISOCountryCode:(id)a0;
+ (BOOL)_isCountryCodeForNorthAmericanDialingPlan:(id)a0;
+ (id)_countryCodesForNorthAmericanDialingPlan;
+ (id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0;
- (BOOL)isValid:(id *)a0;
- (id)lastFourDigits;
- (id)initWithStringValue:(id)a0 countryCode:(id)a1;
- (id)primitiveInitWithStringValue:(id)a0 countryCode:(id)a1;
- (BOOL)isLikePhoneNumberForSamePerson:(id)a0;
- (BOOL)isLikePhoneNumber:(id)a0;
- (struct __CFPhoneNumber { } *)phoneNumberRef;
- (struct __CFPhoneNumber { } *)nts_lazyPhoneNumberRef;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)a0;
- (id)_countryCodeFromPhoneNumberRef;
- (BOOL)isFullyQualified;
- (id)fullyQualifiedDigits;
- (id)digitsRemovingDialingCode;
- (id)formattedStringValueRemovingDialingCode;

@end
