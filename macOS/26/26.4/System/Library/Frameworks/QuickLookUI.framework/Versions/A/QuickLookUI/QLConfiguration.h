@class NSSet, NSDictionary;

@interface QLConfiguration : NSObject {
    NSSet *_siteWhileList;
    NSDictionary *_schemesMapping;
}

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)init;
- (BOOL)allowWebPluginsForURL:(id)a0;
- (id)fakeSchemeForURL:(id)a0;
- (SEL)selectorForURL:(id)a0 forObject:(id)a1;

@end
