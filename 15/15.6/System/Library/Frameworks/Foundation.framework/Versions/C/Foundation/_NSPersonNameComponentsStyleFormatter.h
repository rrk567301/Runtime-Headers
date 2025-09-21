@class NSSet, NSArray, NSPersonNameComponentsFormatter, NSLocale;

@interface _NSPersonNameComponentsStyleFormatter : NSObject {
    NSSet *_abbreviatedKeys;
    NSSet *_keysOfInterest;
    char _shouldFallBack;
    char _isEnabled;
    long long _ordering;
    NSLocale *_locale;
    NSArray *_orderedTemplate;
    NSArray *_fallbackDescriptor;
}

@property (readonly) NSSet *abbreviatedKeys;
@property (readonly) NSSet *keysOfInterest;
@property (readonly) NSArray *orderedTemplate;
@property (readonly) NSArray *orderedKeysOfInterest;
@property long long ordering;
@property (readonly) char shouldFallBack;
@property (readonly) char isEnabled;
@property (readonly) char shouldIgnoreComponentsContainingSpecialCharacters;
@property (retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter;
@property (readonly, copy) NSArray *fallbackDescriptor;
@property (readonly, copy) NSPersonNameComponentsFormatter *masterFormatter;

- (void)dealloc;
- (id)_delimiterBetweenString:(id)a0 andString:(id)a1 isPhonetic:(char)a2;
- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;
- (id)_orderedNonEmptyKeysFromComponents:(id)a0;
- (void)_releaseIvars;
- (id)annotatedStringFromPersonNameComponents:(id)a0;
- (char)fullComponentsAreValid:(id)a0;
- (id)initWithMasterFormatter:(id)a0;
- (id)stringFromComponents:(id)a0 attributesByRange:(id)a1;

@end
