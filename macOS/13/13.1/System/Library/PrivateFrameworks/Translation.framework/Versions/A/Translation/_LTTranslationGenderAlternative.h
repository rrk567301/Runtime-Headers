@class NSNumber, NSString;

@interface _LTTranslationGenderAlternative : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *group;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } sourceRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } targetRange;
@property (retain, nonatomic) NSString *defaultGender;

+ (id)genderAlternativesFromDictionary:(id)a0;
+ (id)genderAlternativeFromDictionary:(id)a0 withGroup:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
