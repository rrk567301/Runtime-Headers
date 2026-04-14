@class NSArray, GEOPDUnifiedActionModuleConfiguration;

@interface GEOUnifiedActionButtonModuleConfiguration : NSObject {
    GEOPDUnifiedActionModuleConfiguration *_buttonModuleConfig;
}

@property (readonly, nonatomic) NSArray *buttonItems;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUnifiedActionModuleConfiguration:(id)a0;

@end
