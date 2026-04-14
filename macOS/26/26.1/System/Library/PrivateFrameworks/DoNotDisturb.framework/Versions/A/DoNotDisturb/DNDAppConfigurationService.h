@class NSString;

@interface DNDAppConfigurationService : NSObject {
    NSString *_clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)a0;
+ (void)initialize;

- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)getCurrentAppConfigurationForActionIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)invalidateAppContextForActionIdentifier:(id)a0;

@end
