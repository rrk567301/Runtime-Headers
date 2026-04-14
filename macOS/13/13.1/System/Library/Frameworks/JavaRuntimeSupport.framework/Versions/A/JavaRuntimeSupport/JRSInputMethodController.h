@interface JRSInputMethodController : NSObject

+ (id)controller;

- (void)setCurrentInputMethodForLocale:(id)a0;
- (id)currentInputMethodName;
- (id)availableInputMethodLocales;
- (id)currentInputMethodLocale;

@end
