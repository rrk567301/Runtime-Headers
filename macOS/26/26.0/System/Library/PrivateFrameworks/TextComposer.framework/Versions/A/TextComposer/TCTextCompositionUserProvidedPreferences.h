@class NSArray, TCSmartReplyUserQuestionnaire;

@interface TCTextCompositionUserProvidedPreferences : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *preferenceStrings;
@property (readonly, copy) TCSmartReplyUserQuestionnaire *multipleChoicePreferences;
@property (readonly, copy) NSArray *gradedPreferences;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreferenceStrings:(id)a0 gradedPreferences:(id)a1 multipleChoicePreferences:(id)a2;

@end
