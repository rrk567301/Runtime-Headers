@class NSSet, NSDictionary;

@interface QLConfiguration : NSObject {
    NSSet *_siteWhileList;
    NSDictionary *_schemesMapping;
}

+ (id)sharedConfiguration;

- (void)dealloc;
- (id)init;
- (id)fakeSchemeForURL:(id)a0;
- (BOOL)allowWebPluginsForURL:(id)a0;
- (SEL)selectorForURL:(id)a0 forObject:(id)a1;

@end
