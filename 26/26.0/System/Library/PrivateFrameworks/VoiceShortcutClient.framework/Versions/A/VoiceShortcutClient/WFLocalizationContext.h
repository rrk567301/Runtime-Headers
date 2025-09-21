@class NSString, NSLocale, INStringLocalizer;

@interface WFLocalizationContext : NSObject

@property (class, readonly, nonatomic) WFLocalizationContext *defaultContext;

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) INStringLocalizer *stringLocalizer;
@property (readonly, nonatomic) NSString *localizationUsage;

- (void).cxx_destruct;
- (id)localize:(id)a0;
- (id)initWithLocale:(id)a0 stringLocalizer:(id)a1;
- (id)initWithLocale:(id)a0 stringLocalizer:(id)a1 localizationUsage:(id)a2;
- (id)localize:(id)a0 pluralizationNumber:(id)a1;

@end
