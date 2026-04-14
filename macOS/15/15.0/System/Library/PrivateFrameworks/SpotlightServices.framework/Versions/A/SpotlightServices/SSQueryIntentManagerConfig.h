@class SRResources, NSSet, NSDictionary, NSDate;

@interface SSQueryIntentManagerConfig : NSObject {
    SRResources *_resources;
    NSDictionary *_baseConfig;
    NSDate *_expirationDate;
}

@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSSet *serverDomainDemotionExclusionSet;

+ (id)sharedInstance;
+ (id)_parseServerDomainExclusionSet:(id)a0;
+ (id)_getParsecDomainMapping;

- (void).cxx_destruct;
- (void)update;
- (void)update:(BOOL)a0;
- (BOOL)expired;
- (id)_defaultOptions;
- (void)_clearConfig;
- (void)_updateInternalConfig:(id)a0;
- (BOOL)getBoolParameter:(id)a0;
- (int)getIntParameter:(id)a0;
- (void)updateWithResources:(id)a0 defaults:(id)a1;

@end
