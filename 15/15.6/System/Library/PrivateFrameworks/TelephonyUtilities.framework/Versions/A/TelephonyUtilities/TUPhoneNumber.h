@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property struct __CFPhoneNumber { } *phoneNumberRef;
@property (readonly) NSString *digits;
@property (readonly) NSString *countryCode;
@property (readonly) NSString *formattedRepresentation;
@property (readonly) NSString *formattedInternationalRepresentation;
@property (readonly) NSString *unformattedInternationalRepresentation;

+ (id)phoneNumberWithDigits:(id)a0 countryCode:(id)a1;
+ (char)areDigits:(id)a0 equalToDigits:(id)a1 usingCountryCode:(id)a2;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { } *)a0;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (id)countryCode;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)digits;
- (id)initWithDigits:(id)a0 countryCode:(id)a1;
- (id)formattedInternationalRepresentation;
- (id)formattedRepresentation;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { } *)a0;
- (id)unformattedInternationalRepresentation;

@end
