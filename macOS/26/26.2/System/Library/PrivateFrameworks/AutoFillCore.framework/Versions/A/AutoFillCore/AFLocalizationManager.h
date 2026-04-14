@class NSString;

@interface AFLocalizationManager : NSObject

@property (retain, nonatomic) NSString *localeIdentifier;

- (id)initWithLocaleIdentifier:(id)a0;
- (id)initForLocalizedStrings;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_truncationSentinel;
- (id)accessibilityLabelForAFTextContentType:(id)a0;

@end
