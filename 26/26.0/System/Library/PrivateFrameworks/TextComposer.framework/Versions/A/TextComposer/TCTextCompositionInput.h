@class NSString, NSDictionary, TCAttributedStringDigest, NSAttributedString, TCTextCompositionUserProvidedPreferences;

@interface TCTextCompositionInput : NSObject <NSCopying, NSSecureCoding> {
    TCAttributedStringDigest *_digest;
    NSAttributedString *_digestedAttributedString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *string;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } modifiedRange;
@property (readonly) unsigned long long offset;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } actualRange;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } contextRange;
@property (readonly, copy) NSDictionary *filteredOptions;
@property (readonly, copy) TCTextCompositionUserProvidedPreferences *userProvidedPreferences;

- (id)digest;
- (id)formattedString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 error:(id *)a3;
- (id)digestedAttributedString;
- (id)formattedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 lookBack:(BOOL)a3 tagger:(id)a4 userProvidedPreferences:(id)a5 error:(id *)a6;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 userProvidedPreferences:(id)a3 error:(id *)a4;
- (id)initWithDigestedAttributedString:(id)a0 modifiedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 filteredOptions:(id)a3 userProvidedPreferences:(id)a4;
- (id)initWithInput:(id)a0 additionalOptions:(id)a1;
- (id)initWithInput:(id)a0 additionalOptions:(id)a1 userProvidedPreferences:(id)a2;

@end
