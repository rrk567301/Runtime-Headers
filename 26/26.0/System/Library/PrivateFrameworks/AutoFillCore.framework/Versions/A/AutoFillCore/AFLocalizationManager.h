@class NSString;

@interface AFLocalizationManager : NSObject

@property (retain, nonatomic) NSString *localeIdentifier;

- (id)_truncationSentinel;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (id)init;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initForLocalizedStrings;
- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityLabelForAFTextContentType:(id)a0;

@end
