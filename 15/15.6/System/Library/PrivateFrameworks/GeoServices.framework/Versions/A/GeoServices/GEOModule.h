@class GEOPDModule, GEOModuleConfiguration;
@protocol GEOModuleConfigurationProvider;

@interface GEOModule : NSObject {
    GEOPDModule *_module;
    id<GEOModuleConfigurationProvider> _moduleConfigProvider;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOModuleConfiguration *configuration;
@property (readonly, nonatomic) char hasConfiguration;
@property (readonly, nonatomic) char isExpectedToHaveConfiguration;
@property (readonly, nonatomic) int configurationExpectation;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0 moduleConfigProvider:(id)a1;

@end
