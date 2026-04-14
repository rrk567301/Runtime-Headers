@class NSArray;

@interface _LTLanguageListHelper : NSObject

@property (readonly, copy, nonatomic) NSArray *localeList;

- (void).cxx_destruct;
- (id)displayNameForLocale:(id)a0 context:(long long)a1 inTargetLocale:(id)a2;
- (id)initWithLocaleList:(id)a0;

@end
