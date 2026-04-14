@class NSSet, NSDictionary;

@interface QLConfiguration : NSObject {
    NSSet *_siteWhileList;
    NSDictionary *_schemesMapping;
}

+ (id)sharedConfiguration;

- (id)init;
- (void).cxx_destruct;
- (SEL)selectorForURL:(id)a0 forObject:(id)a1;
- (id)fakeSchemeForURL:(id)a0;
- (BOOL)allowWebPluginsForURL:(id)a0;

@end
