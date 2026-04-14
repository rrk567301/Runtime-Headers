@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct __CFPhoneNumber { } *phoneNumberRef;
@property (readonly) NSString *digits;
@property (readonly) NSString *countryCode;
@property (readonly) NSString *formattedRepresentation;
@property (readonly) NSString *formattedInternationalRepresentation;
@property (readonly) NSString *unformattedInternationalRepresentation;

+ (id)phoneNumberWithDigits:(id)a0 countryCode:(id)a1;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { } *)a0;
+ (BOOL)areDigits:(id)a0 equalToDigits:(id)a1 usingCountryCode:(id)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)countryCode;
- (id)digits;
- (id)initWithDigits:(id)a0 countryCode:(id)a1;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { } *)a0;
- (id)formattedRepresentation;
- (id)formattedInternationalRepresentation;
- (id)unformattedInternationalRepresentation;

@end
