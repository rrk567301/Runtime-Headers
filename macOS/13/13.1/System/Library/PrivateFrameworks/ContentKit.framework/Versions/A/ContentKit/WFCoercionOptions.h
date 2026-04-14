@class NSDictionary;

@interface WFCoercionOptions : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)new;
+ (id)optionsWithDictionary:(id)a0;
+ (void)registerDefaultDisallowedCoercionPath:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)preferredTypes;
- (id)optionsByAddingContentsOfOptions:(id)a0;
- (BOOL)coercionPathIsDisallowed:(id)a0;
- (id)itemClassPrioritizationType;
- (void)presentSmartPromptForWebpageLoadWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)allowUnrestrictedNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_allowUnrestrictedNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)allowUnrestrictedNetworkAccessWithoutPromptingWithCompletionHandler:(id /* block */)a0;

@end
