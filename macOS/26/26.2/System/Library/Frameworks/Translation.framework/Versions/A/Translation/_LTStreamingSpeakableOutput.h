@class NSString, NSLocale;

@interface _LTStreamingSpeakableOutput : NSObject

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *translatedText;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 locale:(id)a1;

@end
