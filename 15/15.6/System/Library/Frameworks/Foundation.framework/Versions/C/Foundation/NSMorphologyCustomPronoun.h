@class NSDictionary, NSString;

@interface NSMorphologyCustomPronoun : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *_externalRepresentationDictionary;
@property (copy, nonatomic) NSString *subjectForm;
@property (copy, nonatomic) NSString *objectForm;
@property (copy, nonatomic) NSString *possessiveForm;
@property (copy, nonatomic) NSString *possessiveAdjectiveForm;
@property (copy, nonatomic) NSString *reflexiveForm;

+ (char)_validateCustomPronounWithAccessor:(id /* block */)a0 forLanguage:(id)a1 error:(id *)a2;
+ (char)isSupportedForLanguage:(id)a0;
+ (id)requiredKeysForLanguage:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_autocompleteEnglishPronounFromSubjectForm;
- (id)_externalRepresentation;
- (id)_initWithExternalRepresentationDictionary:(id)a0;

@end
