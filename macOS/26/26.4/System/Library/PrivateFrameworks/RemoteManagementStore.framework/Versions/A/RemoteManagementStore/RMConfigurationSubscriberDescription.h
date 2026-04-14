@class NSArray;

@interface RMConfigurationSubscriberDescription : NSObject

@property (readonly, copy, nonatomic) NSArray *types;
@property (readonly, copy, nonatomic) NSArray *scopes;

+ (id)descriptionWithEventsDictionary:(id)a0;
+ (id)descriptionWithServiceDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithTypes:(id)a0 scopes:(id)a1;

@end
