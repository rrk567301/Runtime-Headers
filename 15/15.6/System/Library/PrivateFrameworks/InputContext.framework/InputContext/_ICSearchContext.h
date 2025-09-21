@class NSString, NSArray;

@interface _ICSearchContext : NSObject

@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) char isResponseContextDenylisted;
@property (readonly, nonatomic) char shouldDisableAutoCaps;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 recipients:(id)a1 applicationBundleIdentifier:(id)a2 isResponseContextDenylisted:(char)a3 shouldDisableAutoCaps:(char)a4;

@end
