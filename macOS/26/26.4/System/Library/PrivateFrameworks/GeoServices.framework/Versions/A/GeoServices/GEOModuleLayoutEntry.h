@class NSString, NSArray, GEOPDModuleLayoutEntry;
@protocol GEOModuleConfigurationProvider;

@interface GEOModuleLayoutEntry : NSObject {
    GEOPDModuleLayoutEntry *_moduleLayoutEntry;
    id<GEOModuleConfigurationProvider> _moduleConfigProvider;
}

@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic) NSArray *modules;
@property (readonly, nonatomic) int renderingMode;

+ (id)moduleLayoutEntryFromArray:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)_performPostCheckForModules:(id)a0;
- (id)initWithModuleLayoutEntry:(id)a0 moduleConfigProvider:(id)a1;

@end
