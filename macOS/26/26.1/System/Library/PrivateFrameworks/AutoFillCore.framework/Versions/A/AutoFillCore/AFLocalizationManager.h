@class NSString;

@interface AFLocalizationManager : NSObject

@property (retain, nonatomic) NSString *localeIdentifier;

- (id)localizedStringForKey:(id)a0;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initForLocalizedStrings;
- (id)_truncationSentinel;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityLabelForAFTextContentType:(id)a0;

@end
