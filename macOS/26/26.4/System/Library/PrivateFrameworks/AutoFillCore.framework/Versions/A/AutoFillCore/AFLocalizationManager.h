@class NSString;

@interface AFLocalizationManager : NSObject

@property (retain, nonatomic) NSString *localeIdentifier;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initForLocalizedStrings;
- (id)init;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (id)_truncationSentinel;
- (id)localizedStringForKey:(id)a0;
- (id)accessibilityLabelForAFTextContentType:(id)a0;

@end
