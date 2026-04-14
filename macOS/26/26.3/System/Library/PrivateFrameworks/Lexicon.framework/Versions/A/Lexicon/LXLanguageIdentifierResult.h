@class NSLocale;

@interface LXLanguageIdentifierResult : NSObject

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) double probability;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 probability:(double)a1;

@end
