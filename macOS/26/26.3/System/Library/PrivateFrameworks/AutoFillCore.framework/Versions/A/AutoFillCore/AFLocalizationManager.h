@class NSString;

@interface AFLocalizationManager : NSObject

@property (retain, nonatomic) NSString *localeIdentifier;

- (id)_truncationSentinel;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initForLocalizedStrings;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (id)accessibilityLabelForAFTextContentType:(id)a0;

@end
