@class NSArray, NSString;
@protocol _LTLanguageVariantFilterDelegate;

@interface _LTLanguageVariantFilter : NSObject <_LTLanguageVariantFilterDelegate>

@property (readonly, copy, nonatomic) NSArray *supportedLocales;
@property (readonly, copy, nonatomic) NSArray *recommendedLocales;
@property (weak, nonatomic) id<_LTLanguageVariantFilterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSupportedLocales:(id)a0;
- (id)_uniqueSupportedLanguages;
- (id)keyboardsForFilter:(id)a0;
- (id)preferredLanguagesForFilter:(id)a0;
- (id)requiredLocalesForFilter:(id)a0;

@end
